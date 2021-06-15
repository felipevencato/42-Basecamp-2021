#!/bin/sh
ip a | awk '/ether/{print $2}'
