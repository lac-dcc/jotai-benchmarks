# Jotai Benchmarks

Jotai is a large collection of executable benchmarks mined from open source
repositories.
Each benchmark consists of a single function written in C, plus a driver to run that function. These functions have been mined from the [AnghaBench](http://cuda.dcc.ufmg.br/angha/home) repository, and have been augmented with code to generate inputs for them.

#### Project Structure

A small sample showing how this project is organized. It won't be kept up to date, use it as reference when adding new benchmarks.

```
# ================================ dirs only ================================ #
.
├── assets
│  └── img
├── data
│  ├── anghaLeaf
│  │  ├── programs_no-ub_all
│  │  ├── programs_no-ub_dynInstCnt-greaterThan-staticInstCnt
│  │  └── programs_no-ub_printableRetVal
│  └── SPEC_CPU_2017
├── src
│  └── anghaLeaf
│     ├── programs_no-ub_all
│     ├── programs_no-ub_dynInstCnt-greaterThan-staticInstCnt
│     └── programs_no-ub_printableRetVal
├── tmp
└── util
   └── notebooks
```

## Sample Results

Inputs for these 15,305 programs have been produced with an strategy called "BigArray", which consists in assigning each pointer to a memory region that is a large as the size of the largest integer passed to the benchmark function. We have eliminated from this evaluation the speedups greater than 8.0x, as they are likely to be exceptional results. In total, 105 benchmarks have been eliminated in this way. Below, on the left, we show the [density distribution](https://en.wikipedia.org/wiki/Histogram) of speedups:

![Results involving big array constraints](./assets/img/BigArrayDynResults.jpg?raw=true "Sample Results")

On the average, we observe a mean speedup of 2.72x, with median 2.57x. Regressions are also possible: the worse regression lead to a slowdown of 2.08x (the speedup of 0.48x). In the middle of the above figure, we show a [quantile-quantile plot](https://en.wikipedia.org/wiki/Q%E2%80%93Q_plot). This Q-Q plot compares the distributions of speedups with the normal distribution. Through the Q-Q plot, we can see an excess of outliers, mostly on the right of the speedup mean. The gray area highlights the region where outliers would be expected in a normal distribution. Thus, the plot provides visual hints that the speedups obtained through optimization are not normally distributed. The [Shapiro-Wilk Normality Test](https://en.wikipedia.org/wiki/Shapiro%E2%80%93Wilk_test) indicates that these results are unlikely to come from a normal distribution.
