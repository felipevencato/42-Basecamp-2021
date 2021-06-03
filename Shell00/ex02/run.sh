#!/bin/bash
rm -rf test*
mkdir test{0,2}
truncate -s1 test{1,4}
truncate -s2 test3
ln test3 test5
ln -s test0 test6
: '
drwx--xr-x 2 XX XX XX Jun 1 20:47 test0
-rwx--xr-- 1 XX XX 4 Jun 1 21:46 test1
dr-x---r-- 2 XX XX XX Jun 1 22:45 test2
-r-----r-- 2 XX XX 1 Jun 1 23:44 test3
-rw-r----x 1 XX XX 2 Jun 1 23:43 test4
-r-----r-- 2 XX XX 1 Jun 1 23:44 test5
lXXXXXXXXX 1 XX XX 5 Jun 1 22:20 test6 -> test0'
chmod 715 test0
chmod 714 test1
chmod 504 test2
chmod 404 test3
chmod 641 test4
touch -t 2006012047 test0
touch -t 2006012146 test1
touch -t 2006012245 test2
touch -t 2006012344 test3
touch -t 2006012343 test4
touch -ht 2006012220 test6
tar -cf exo2.tar test*
tar -vtf exo2.tar
