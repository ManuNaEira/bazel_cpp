load("@rules_python//python:py_test.bzl", "py_test")

cc_test(
    name = "test_lib1",
    srcs = ["test_lib1.cpp"],
    deps = [
        "//src/example/lib1:lib1",
        "@googletest//:gtest_main",
    ],
)

py_test(
    name = "test_lib1_py",
    size="small",
    srcs = ["test_lib1.py"],
    main = "test_lib1.py",
    deps = ["//src/example/lib1:lib1_py_lib"],
)
