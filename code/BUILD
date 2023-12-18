cc_library(
    name="lib1",
    srcs=["Addition.cpp"],
    hdrs=["Addition.h"],
    visibility = ["//visibility:public"],
)

cc_library(
    name="lib2",
    srcs=["Sub.cpp"],
    hdrs=["Sub.h"],
    visibility = ["//visibility:public"],
)

cc_library(
    name="lib3",
    srcs=["Mul.cpp"],
    hdrs=["Mul.h"],
    visibility = ["//visibility:public"],
)

cc_library(
    name="lib4",
    srcs=["Div.cpp"],
    hdrs=["Div.h"],
    visibility = ["//visibility:public"],
)

cc_binary(
    name = "Program",
    srcs = ["main.cpp"],
    deps=[":lib1",":lib2",":lib3",":lib4",],
)

