# Jotai Benchmarks

Jotai is a large collection of executable benchmarks mined from open source
repositories.
Each benchmark consists of a single function written in C, plus a driver to run that function. These functions have been taken from the [AnghaBench](http://cuda.dcc.ufmg.br/angha/home) repository, and have been augmented with code to generate inputs for them.

## Running

Executing Jotai benchmarks is super easy: just compile and run!
Each executable program receives a single argument: an integer that specifies
which input will be used to run that program.
Every benchmark has at least input 0 (e.g., `./file.exe 0`), but often they
have more inputs (1, 2, ...). 
For instance, the following commands will compile and run `extr_A...al.c` with
its first input:

```
$> cd benchmarks/anghaLeaves/
$> clang extr_Arduinotestsdevicetest_libcmemmove1.c_mymemmove_Final.c
$> ./a.out 0
```

To see all the inputs available for a benchmark, just run the benchmark
without passing arguments to it.
For instance, still considering `extr_A...al.c`, we get:

```
$> ./a.out

Usage:
    prog [OPTIONS] [ARGS]

    ARGS:
       0    big-arr
       1    big-arr-10x
```

In this example, the benchmark provides two inputs. Each one was produced with
a different set of constraints. Each set of constraints that we use has a name:
`big-arr` and `bit-arr-10x`, in the above example.
We have a domain specific language to specify these constraints.
We are preparing a report about it, but if you want to know more, just write us
an email.

### Deriving Statistics

Most of the Jotai functions run for a very short time.
If you want to time them, be prepared to use solid statistical equipment
(t-test, confidence interval, p-values, etc) to deal with high variances.
If you want more deterministic numbers, we recommend you to analyze the
benchmarks using [CFGGrind](https://github.com/rimsa/CFGgrind).
CFGGrind lets you count the number of instructions that were executed, the
number of basic blocks that were visited, the number of executed conditional
branches that were not completely covered, etc.
The beauty of it is that these numbers are deterministic and lead to
reproducible experiments.

## Sample Results

We can extract lots of statistics from the Jotai benchmarks.
For instance, below we show results for 15,305 programs that contain
inputs produced by a constraint set called "BigArray".
This strategy consists in assigning each pointer in the target function to a
memory region that is a large as the size of the largest integer passed to the
function.
We have eliminated from this evaluation the speedups greater than 8.0x, as they
are likely to be exceptional results.
In total, 105 benchmarks have been eliminated in this way.
Below, on the left, we show the
[density distribution](https://en.wikipedia.org/wiki/Histogram) of speedups:

![Results involving big array constraints](./assets/img/BigArrayDynResults.jpg?raw=true "Sample Results")

On the average, we observe a mean speedup of 2.72x, with median 2.57x. Regressions are also possible: the worse regression lead to a slowdown of 2.08x (the speedup of 0.48x). In the middle of the above figure, we show a [quantile-quantile plot](https://en.wikipedia.org/wiki/Q%E2%80%93Q_plot). This Q-Q plot compares the distributions of speedups with the normal distribution. Through the Q-Q plot, we can see an excess of outliers, mostly on the right of the speedup mean. The gray area highlights the region where outliers would be expected in a normal distribution. Thus, the plot provides visual hints that the speedups obtained through optimization are not normally distributed. The [Shapiro-Wilk Normality Test](https://en.wikipedia.org/wiki/Shapiro%E2%80%93Wilk_test) indicates that these results are unlikely to come from a normal distribution.

## The Zen of Jotai

Jotai is a large dataset of executable programs.
While producing these programs, we decided to stick to the following

- **Compile-and-run**: each benchmark comes in a separate file as an independent compilation unit, with all the drivers necessary to run it. All that must be done is to compile it and it will (hopefully) run.
- **Well-defined**: every benchmark must run till termination if compiled with the commands: `clang -g -O1 -fsanitize=address,undefined,signed-integer-overflow -fno-sanitize-recover=all`
- **Deterministic**: random inputs are produced from the same seed using a library of our own craft; hence, execution should be portable across different platforms.
- **Profilable**: we tried as much as possible to generate at least two different inputs per program, so that they could be used as the target of profile guided optimizations.
- **Harmless**: benchmark do not invoke third-party functions. Thus, every instruction is [visible](https://homepages.dcc.ufmg.br/~fernando/publications/papers/AlvaresJCL21.pdf), and the benchmarks cannot exploit security vulnerabilities in the host system. The sole exception is that we have a small folder with programs that invoke functions from `math.h`.
- **Extensible**: we are working on a DSL for the generation of random inputs. In this way, users of Jotai can produce more inputs to the benchmarks without having to hardcode the drivers.
- **Observable**: we would like to have functions that return values (done!) or at least be able to print the values of local variables, like Whiro does (not done!)
- **Clean**: every allocated memory chunk should be deallocated at the end of execution. In other words, none of the benchmarks cause memory leaks.

## Browsing the repository

Benchmarks are currently stored in two folders:

- `anghaLeaves`: benchmark functions that do not call any other function
- `anghaMath`: benchmark functions that call functions from `math.h`

Each benchmark consists of single file. This file contains a single function (which we call the *benchmark*) plus everything that you need to compile and run that function: input generators, forward declarations, the `main` function, stuff to generate random numbers, etc.

We have a few CSV files that we have produced for the benchmarks stored in the `data` folder. This folder is subdivided into three directories:

- `SPEC_CPU_2017`: results produced for [SPEC CPU2017](https://www.spec.org/cpu2017/), which we provide for comparing against our benchmarks.
- `anghaLeaves`: results produced after observing the execution of the benchmarks in the `anghaLeaves` dataset.
- `anghaMath`: results produced after observing the execution of the benchmarks in the `anghaMath` dataset.

Additionally, we have a `Scripts` folder with a few useful shell scripts that you can use to collect statistics for the Jotai programs.
