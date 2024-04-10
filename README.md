# bazel_cpp
Repository to explore the bazel build system for C++ code.

## Installation - VSCode Dev Containers

> ⚠ If following these steps you are encountering network issues and you are in
> WSL with ZScaler VPN client connected, try to disconnect from the client as
> described in this Confluence:
> https://confluence.devops.jlr-apps.com/display/VCDP/5.4.5+How+to+disable+ZScaler

- There are two options to clone the repo and initialize the container:
  - First option: clone the repo, open the folder in VSCode and run the command
    **Dev Containers: Open Folder in Container...**
  - Second option: open VSCode and run the command **Dev Containers: Clone
    Repository in Container Volume...**
- In a terminal, run `bazel run src/example1:example1` command, you should get an
  output like the following:
  ```bash
  INFO: Analyzed target //src/example1:example1 (68 packages loaded, 305 targets configured).
  INFO: Found 1 target...
  Target //src/example1:example1 up-to-date:
    bazel-bin/src/example1/example1
  INFO: Elapsed time: 5.352s, Critical Path: 0.16s
  INFO: 7 processes: 5 internal, 2 linux-sandbox.
  INFO: Build completed successfully, 7 total actions
  INFO: Running command line: bazel-bin/src/example1/example1
  Hello world!
  ```
