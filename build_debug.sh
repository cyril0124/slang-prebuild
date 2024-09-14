#!/bin/bash

prj_dir=$(pwd)
slang_dir=$prj_dir/slang
build_dir=$slang_dir/build
install_dir=$prj_dir/install

git submodule update --init --recursive
cd $slang_dir; git checkout 4dee9aabdb2fbf01646acb1dd09cbb1fa18e1e62
cd $prj_dir

# ==================================================
# Build shared debug
# ==================================================
rm -rf ${build_dir}_shared_debug
mkdir -p ${build_dir}_shared_debug

cd ${build_dir}_shared_debug; cmake $slang_dir \
-DSLANG_INCLUDE_TOOLS=OFF \
-DSLANG_INCLUDE_TESTS=OFF \
-DBUILD_SHARED_LIBS=ON \
-DCMAKE_BUILD_TYPE=Debug \
-DCMAKE_INSTALL_PREFIX=${install_dir}_shared_debug

cd ${build_dir}_shared_debug; make -j$(nproc)
cd ${build_dir}_shared_debug; make install
cd $prj_dir

# ==================================================
# Build static debug
# ==================================================
rm -rf ${build_dir}_static_debug
mkdir -p ${build_dir}_static_debug

cd ${build_dir}_static_debug; cmake $slang_dir \
-DBUILD_SHARED_LIBS=OFF \
-DCMAKE_BUILD_TYPE=Debug \
-DCMAKE_INSTALL_PREFIX=${install_dir}_static_debug

cd ${build_dir}_static_debug; make -j$(nproc)
cd ${build_dir}_static_debug; make install
cd $prj_dir