#!/bin/sh
rm *MaRViN*
printf 42 > '"\?$*'\'MaRViN\''*$?\"'
chmod 614 \"\\\?\$\*\'MaRViN\'\*\$\?\\\"
touch -t 2110021221 \"\\\?\$\*\'MaRViN\'\*\$\?\\\"
ls -lRa *MaRViN* | cat -e
