#!/bin/bash
wget -P /tmp https://github.com/AbdelwadoudMakh55/alx-low_level_programming/raw/master/0x18-dynamic_libraries/gm.so
export LD_PRELOAD=/tmp/crack_the_gm.so
