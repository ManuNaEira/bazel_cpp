load("@pybind11_bazel//:build_defs.bzl", "pybind_extension")
load("@rules_python//python:py_library.bzl", "py_library")
load("@rules_python//python:packaging.bzl", "py_wheel")
load("@rules_python//python:packaging.bzl", "py_package")

cc_library(
    name = "lib1",
    srcs = ["lib1.cpp"],
    hdrs = ["lib1.hpp"],
    visibility = ["//src/example:__pkg__", "//tests:__pkg__"],
)

pybind_extension(
    name = "lib1_py",
    srcs = ["lib1_py.cpp"],
    deps = [":lib1"],
)

py_library(
    name = "lib1_py_lib",
    data = [":lib1_py"],
    imports = ["."],
    visibility = ["//tests:__pkg__"],
)

py_library(
    name = "lib1_py_stubs",
    data = ["lib1_py.pyi"],
)

# This wraps the extension in a Python package layout
py_package(
    name = "lib1_py_pkg",
    deps = [":lib1_py", ":lib1_py_lib", ":lib1_py_stubs"],
)

py_wheel(
  name = "lib1_py_wheel",
  testonly = True,
  distribution = "lib1_py",
  version = "1.0.0",
  deps = [":lib1_py_pkg"],
  # Add package mapping to flatten structure
  strip_path_prefixes = ["src/example/lib1"],
)
