#!/bin/bash

prj_dir=$(pwd)
slang_dir=$prj_dir/slang
build_dir=$slang_dir/build
install_dir=$prj_dir/install

git submodule update --init --recursive
cd $slang_dir; git checkout v6.0
cd $prj_dir

# ==================================================
# Build shared
# ==================================================
rm -rf ${build_dir}_shared
mkdir -p ${build_dir}_shared

cd ${build_dir}_shared; cmake $slang_dir \
-DSLANG_INCLUDE_TOOLS=OFF \
-DSLANG_INCLUDE_TESTS=OFF \
-DBUILD_SHARED_LIBS=ON \
-DCMAKE_INSTALL_PREFIX=${install_dir}_shared

cd ${build_dir}_shared; make -j$(nproc)
cd ${build_dir}_shared; make install
cd $prj_dir

# ==================================================
# Build static
# ==================================================
rm -rf ${build_dir}_static
mkdir -p ${build_dir}_static

cd ${build_dir}_static; cmake $slang_dir \
-DSLANG_INCLUDE_TOOLS=OFF \
-DSLANG_INCLUDE_TESTS=OFF \
-DBUILD_SHARED_LIBS=OFF \
-DCMAKE_INSTALL_PREFIX=${install_dir}_static

cd ${build_dir}_static; make -j$(nproc)
cd ${build_dir}_static; make install
cd $prj_dir

