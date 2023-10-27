#!/bin/bash

# List of source files
source_files=(
  0-isupper.c
  0-memset.c
  0-strcat.c
  1-isdigit.c
  1-memcpy.c
  1-strncat.c
  100-atoi.c
  2-strchr.c
  2-strlen.c
  2-strncpy.c
  3-islower.c
  3-puts.c
  3-strcmp.c
  3-strspn.c
  4-isalpha.c
  4-strpbrk.c
  5-strstr.c
  6-abs.c
  9-strcpy.c
  _putchar.c
)

# Compile each source file to generate the corresponding object file
for source_file in "${source_files[@]}"; do
  object_file="${source_file%.c}.o"
  gcc -c "$source_file" -o "$object_file"
done

# Optionally, create a static library if needed (as shown in a previous response)
# ar rcs mylib.a "${source_files[@]%.c}.o"

