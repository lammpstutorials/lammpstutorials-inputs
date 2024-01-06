
#!/bin/bash

export LC_NUMERIC="en_US.UTF-8"
set -e

# 1) Generate white background movie
for file in light.*.ppm; 
do 
	convert $file -transparent white ${file:0:11}.png;
done

img2webp -o ../../../../../docs/sphinx/source/tutorials/figures/level0/lennard-jones-fluid/binary_LJ_fluid_light.webp -q 30 -mixed -d 50 light*.png

# 2) Generate black background movie
for file in dark.*.ppm; 
do 
	convert $file -transparent black ${file:0:10}.png;
done

img2webp -o ../../../../../docs/sphinx/source/tutorials/figures/level0/lennard-jones-fluid/binary_LJ_fluid_dark.webp -q 30 -mixed -d 50 dark*.png
