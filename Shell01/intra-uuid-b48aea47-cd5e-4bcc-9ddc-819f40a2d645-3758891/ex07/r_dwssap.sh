#!/bin/sh
cat /etc/passwd | grep -v '#' | tr -d '#' | awk 'NR%2==0' | cut -d: -f1 | rev | sort -r| sed -n "$FT_Line1,${FT_LINE2}p" | awk 1 ORS=", " | sed 's/..$/./' | tr -d '\n'
