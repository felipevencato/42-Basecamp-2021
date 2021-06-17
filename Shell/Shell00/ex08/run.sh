#!/bin/bash
echo "41 string 42 42 file" > ft_magic
truncate -s41 file
printf "42" >> file
file -m ft_magic file
