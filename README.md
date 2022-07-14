# Jotai Benchmarks

Jotai is a large collection of executable benchmarks mined from open source
repositories.
Each benchmark consists of a single function written in C, plus a driver to run that function. These functions have beentaken from the [AnghaBench](http://cuda.dcc.ufmg.br/angha/home) repository, and have been augmented with code to generate inputs for them.

## Running

Running Jotai benchmarks is super easy: just compile them and execute them!
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
`big-arr` and `bit-arr-10x`.
We have a domain specific language to specify these constraints.
We are preparing a report about it, but if you want to know more, just write us
an email.

## CompilerGym

Jotai is also available among the datasets used in [CompilerGym](https://compilergym.com/).
CompilerGym is a library that supports the implementation of reinforcement
learning techniques to solve compilation tasks.

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
