#!/bin/sh
# Run this to create symlinks for libpeas
# You can compile libpeas yourself, please refer to https://gitlab.gnome.org/GNOME/libpeas

#dir_count="find $PWD/plugins -mindepth 1 -maxdepth 1 -type d | wc -l"

for dirname in $(ls -d $PWD/plugins/*/)
do  
echo "Creating symlink for $PWD/libpeas in $dirname"
ln -sf $PWD/libpeas $dirname
done
