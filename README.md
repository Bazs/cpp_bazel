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