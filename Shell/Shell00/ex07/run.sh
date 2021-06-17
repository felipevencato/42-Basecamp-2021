#!/bin/bash
echo "find -type f \( -name '*~' -o -name '#*#' \) -delete -print" >> clean
rm -rf dir *delete* *keep*
mkdir -p keep/sub delete/sub dir/sub
touch '#'delete# delete~ delete/#delete{1..5}# delete/delete{1..5}~ \
delete/sub/#delete{1..50}# dir/delete{1..7}~ dir/sub/#delete{1..3}# \
keep{1..3} ~keep keep/~keep{4..6} keep/sub/#keep{1..6}
sh clean
