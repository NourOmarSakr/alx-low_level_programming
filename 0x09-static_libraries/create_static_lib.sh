#!/bin/bash
# create_static_lib.sh

# create a list of object files from all the .c files
obj_files=""
for c_file in *.c
do
    # compile each .c file into an object file
    gcc -c -Wall -Werror -Wextra -pedantic $c_file
    # append the object file name to the list
    obj_files="$obj_files ${c_file%.*}.o"
done

# create the static library from the object files
ar -rc liball.a $obj_files

# remove the object files
rm $obj_files
