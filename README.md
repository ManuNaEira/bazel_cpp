# bazel_cpp
Repository to explore the bazel build system for C++ code.

## Features
- **🧩 Modular implementation**: shows how to organise code into different libraries.
- **🧪 Tests with GTest**: running and debugging from VSCode (thanks to [C++
  TestMate](https://marketplace.visualstudio.com/items?itemName=matepek.vscode-catch2-test-adapter)).
- **🌳 Dependency graph generation**.
- **🐍 Python bindings setup**: shows how to create a python extension so that functionality
  implemented in C++ can be accessed in python.

## Installation - VSCode Dev Containers

> ⚙ PREREQUISITES: VSCode, Docker and Git.

- There are two options to clone the repo and initialize development environment:
  - First option: clone the repo, open the folder in VSCode and run the command
    **Dev Containers: Open Folder in Container...**
  - Second option: open VSCode and run the command **Dev Containers: Clone
    Repository in Container Volume...**

## Usage

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
- Run the tests:
  - with the command `bazel test tests:test_lib1`.
  - Through the **VSCode Testing** pane. Debugging also supported!
- To generate the target `//src/example:main` dependency graph run the VSCode
  task "Bazel - Dependency Graph"
- Python bindings can be built using the [`pybind11_bazel`
  module](https://github.com/pybind/pybind11_bazel):
  - See the example binding file for `lib1` in `src/example/lib1/lib1_py.cpp`.
  - The python wheel file can be build with `bazel build //src/example/lib1:lib1_py_wheel`.
  - How to access the python functionality can be seen in `tests/test_lib1.py`, which can be run
    with `bazel test //tests:test_lib1_py`


