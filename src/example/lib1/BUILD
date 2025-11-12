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
    name = "lib1py",
    srcs = ["lib1_py.cpp"],
    deps = [":lib1"],
)

py_library(
    name = "lib1py_lib",
    data = [":lib1py"],
    imports = ["."],
    visibility = ["//tests:__pkg__"],
)

py_library(
    name = "lib1py_stubs",
    data = ["lib1_py.pyi"],
)

# This wraps the extension in a Python package layout
py_package(
    name = "lib1py_pkg",
    deps = [":lib1py", ":lib1py_lib", ":lib1py_stubs"],
)

py_wheel(
  name = "lib1py_wheel",
  distribution = "lib1py",
  version = "1.0.0",
  deps = [":lib1py_pkg"],
  # Add package mapping to flatten structure
  strip_path_prefixes = ["src/example/lib1"],
)
