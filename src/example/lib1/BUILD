load("@pybind11_bazel//:build_defs.bzl", "pybind_extension")
load("@rules_python//python:py_library.bzl", "py_library")
load("@rules_python//python:packaging.bzl", "py_wheel")

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

py_wheel(
  name = "lib1_py_wheel",
  testonly = True,
  distribution = "lib1_py",
  version = "1.0.0",
  deps = [":lib1_py_lib"],
)
