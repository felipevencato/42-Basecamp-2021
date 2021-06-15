#!/bin/sh
cat /etc/passwd \
| sed '/^#/d' \
| sed -n 'n;p' \
| rev \
| cut -d ':' -f7- \
| sort -r \
| sed -n "${FT_LINE1}, ${FT_LINE2}p" \
| sed -n '{s/$/, /p}' \
| tr -d '\n' \
| sed -nr '{s/, $/./p}'
echo
awk 'NR % 2 == 0 {print $1 | "rev | sort -r"}' FS=":" /etc/passwd \
| awk 'NR >= ENVIRON["FT_LINE1"] && NR <= ENVIRON["FT_LINE2"]' ORS=", " \
| awk '{
	sub(/, $/,".", $0)
	printf ("%s",$0)
}'
echo
grep -v '^\#' /etc/passwd \
| sed -nr '2~2{s/^([_a-zA-Z0-9-]*):.*/\1/p}' \
| rev \
| sort -r \
| sed -n "${FT_LINE1},${FT_LINE2}{s/$/,/p}" \
| tr "\n" " " \
| sed 's/, $/./'
#!/usr/bin/awk
awk '
BEGIN {
	FS=":"
	ORS=" ,"
}
NR % 2 == 0 {
	print $1 | "rev | sort -r"
}
NR >= ENVIRON["FT_LINE1"] && NR <= ENVIRON["FT_LINE2"]
END {
	sub(/, /,"",$0)
	printf ("%s.",$0)
}' /etc/passwd
