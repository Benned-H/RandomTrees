# RandomTrees

An incremental implementation of various RRT-based algorithms.

## Objectives

This project aims to produce high-quality implementations of one lineage of stochastic motion planning algorithms, based on the Rapidly-Exploring Random Tree (RRT) [@LaValle98]. These efforts are approached as follows:

- Incrementally, where the design evolves by tracing the chronology of RRT-based approaches from the original RRT (1998) toward the present.
- Results-driven, by explicitly testing the codebase for the same results and comparisons presented in the original literature.
- Educationally, through accessible documentation meant to explain the novel contributions of each successive approach.

This design approach will be supplemented by continuous integration tooling, including automated builds, regression testing with coverage analysis, and static analysis. The intent of these practices is to encourage the development of maintainable, testable, and clear code, ready for refactor or reuse.