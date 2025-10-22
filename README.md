# bazel_cpp
Repository to explore the bazel build system for C++ code.

## Installation - VSCode Dev Containers

> ⚙ PREREQUISITES: VSCode, Docker and Git.

- There are two options to clone the repo and initialize development environment:
  - First option: clone the repo, open the folder in VSCode and run the command
    **Dev Containers: Open Folder in Container...**
  - Second option: open VSCode and run the command **Dev Containers: Clone
    Repository in Container Volume...**
- In a terminal, run `bazel run src/example:main` command, you should get an
  output like the following:
  ```bash
  INFO: Analyzed target //src/example:main (0 packages loaded, 0 targets configured).
  INFO: Found 1 target...
  Target //src/example:main up-to-date:
    bazel-bin/src/example/main
  INFO: Elapsed time: 0.117s, Critical Path: 0.00s
  INFO: 1 process: 2 action cache hit, 1 internal.
  INFO: Build completed successfully, 1 total action
  INFO: Running command line: bazel-bin/src/example/main
  Hello World!
  ```

## Features
- 🧩 Modular implementation: shows how to organise code into different libraries.
