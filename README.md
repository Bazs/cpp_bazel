# C++ with Bazel

This project serves as a tiny template for anyone looking to build C++ projects with Bazel in 2024
without wanting to pull their hair out.

The beauty of Bazel is its reproducibility and platform independence. With this setup:

* All you need to do is install a tool called bazelisk (a lightweight wrapper for Bazel).
* Bazel will handle the rest, like downloading the appropriate C++ compiler and dependencies, ensuring everything works seamlessly on any platform.

## Deps

On Mac:
`brew install bazelisk`

On other platforms, look up how to install bazelisk.

## Run

E.g, `bazel run //:ranges_demo`

## C++ language server support

`bazel run //:refresh_compile_commands`

## Format Bazel files

`bazel run //:buildifier.fix`
