#!/bin/sh
#ls -l| sed -n 1~2p
#ls -l| sed '{n;d}'
ls -l| sed -n '{p;n}'
