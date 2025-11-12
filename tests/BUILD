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
    name = "test_lib1py",
    size="small",
    srcs = ["test_lib1.py"],
    main = "test_lib1.py",
    deps = ["//src/example/lib1:lib1py_lib"],
)
