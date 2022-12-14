#!/bin/bash
curl -Lso "lib.so" "https://github.com/Bayoalliy/alx-low_level_programming/0x18-dynamic_libraries/raw/master/lib.so"
export LD_PRELOAD=./lib.so
