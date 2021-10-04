#!/bin/sh
row=${1}
col=${2}
for i in $(seq $row)
do
	for j in $(seq $col)
	do
		echo -n "$i x $j = $((i*j)) "
	done
	echo ""
done
exit 0
