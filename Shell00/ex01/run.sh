#!/bin/bash
truncate -s40 testShell00
chmod 455 testShell00
touch -t 2006012342 testShell00
tar -cf testShell00.tar testShell00
tar -vtf testShell00.tar
