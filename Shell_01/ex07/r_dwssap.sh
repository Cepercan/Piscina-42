#!/bin/sh
cat /etc/passwd |grep -v '#' | awk -F ':' '{print $1}' | awk '(NR+1)%2' |rev |sort -r | sed -n ""$FT_LINE1","$FT_LINE2"p" | tr '\n' ',' | sed 's/,/, /g' | sed 's/,.$/./' | tr -d '\n'
