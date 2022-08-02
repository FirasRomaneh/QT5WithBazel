load("//tools/build_rules:qt.bzl", "qt_cc_library")

package(default_visibility = ["//visibility:public"])

cc_library(
    name = "opencv",
    linkopts = [
        "-lopencv_core",
        "-lopencv_calib3d",
        "-lopencv_features2d",
        "-lopencv_highgui",
        "-lopencv_imgcodecs",
        "-lopencv_imgproc",
        "-lopencv_video",
        "-lopencv_videoio",
        ],
)

cc_binary(
    name = "main",
    srcs = ["main.cpp"],
    copts = [
        '-fpic',
    ],
    deps = [
        ":opencv",
        ":mainwindow",
        "@qt//:qt_widgets",
    ],
)

qt_cc_library(
    name = "mainwindow",
    src = "mainwindow.cpp",
    hdr = "mainwindow.h",
    normal_hdrs = [
        'test_header.h',
        'test_header2.h',
    ],
    copts = [
        '-fpic',
    ],
    deps = [
        "@qt//:qt_core",
        "@qt//:qt_widgets",
        "@qt//:qt_gui",
    ],
    ui = "mainwindow.ui",
    ui_deps = [
        "@qt//:qt_widgets",
    ],
)
