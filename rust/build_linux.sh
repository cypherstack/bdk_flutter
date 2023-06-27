#!/bin/bash

echo "Building x86_64 version"
cargo build --target x86_64-unknown-linux-gnu --release
mkdir -p ../linux/bin/x86_64-unknown-linux-gnu/release
cp target/x86_64-unknown-linux-gnu/release/librust_bdk_ffi.so ../linux/bin/x86_64-unknown-linux-gnu/release/