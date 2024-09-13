#!/bin/bash

export LD_LIBRARY_PATH=$(dirname $(realpath $0))/install_shared/lib:$LD_LIBRARY_PATH
export PATH=$(dirname $(realpath $0))/install_shared/bin:$PATH
export SLANG_HOME=$(dirname $(realpath $0))/install_shared
