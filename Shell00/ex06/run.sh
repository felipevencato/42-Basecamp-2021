#!/bin/bash
rm diff a sw.diff
tar -xf resources.tar.gz
cp a b
patch b sw.diff
cat b
diff a b > diff
diff diff sw.diff
