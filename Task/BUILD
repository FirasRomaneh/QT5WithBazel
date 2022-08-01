load("//tools/build_rules:qt.bzl", "qt_cc_library")
load("@rules_cc//cc:defs.bzl", "cc_binary", "cc_library")

cc_library(
    name = "user",
    srcs = ["user.h"], 
    deps = ["@qt//:qt_core", "@qt//:qt_widgets", "@qt//:qt_gui"],
)

qt_cc_library(
    name = "mainwindow",
    src = "mainwindow.cpp",
    hdr = "mainwindow.h",
    copts = [
        '-fpic',
    ],
    deps = [ "user", 
        "@qt//:qt_core",
        "@qt//:qt_widgets",
        "@qt//:qt_gui",
    ],
    ui = "mainwindow.ui",
    ui_deps = [
        "@qt//:qt_widgets",
    ],
)

qt_cc_library(
    name = "secondwindow",
    src = "secondwindow.cpp",
    hdr = "secondwindow.h",
    copts = [
        '-fpic',
    ],
    deps = [ "user", 
        "@qt//:qt_core",
        "@qt//:qt_widgets",
        "@qt//:qt_gui",
    ],
    ui = "secondwindow.ui",
    ui_deps = [
        "@qt//:qt_widgets",
    ],
)

cc_library(
    name = "Contoller",
    srcs = ["controllerUsers.cpp"],
    hdrs = ["ControllerUsers.h"],
    deps = ["user", "mainwindow", "secondwindow", "@qt//:qt_core", "@qt//:qt_widgets", "@qt//:qt_gui"],
)

cc_binary(
    name = "main",
    srcs = ["main.cpp"],
    copts = [
        '-fpic',
    ],
    deps = [
        "Contoller",
        "@qt//:qt_widgets",
    ],
)