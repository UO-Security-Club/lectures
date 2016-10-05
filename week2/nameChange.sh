#!/bin/bash

#touch output.txt

for i in {1..100}
do
	python -c "print 'A'*$i" | ./nameOverflow > output.txt

	NAME=`grep Hill output.txt`
	SEGF=`grep segfault output.txt`

	if [ -z "$NAME" ]
	then
		echo "Input size is: $i"
	else
		echo "Input size is: $i"
		echo $NAME
		exit 1
	fi

	if [ -z "$SEGF" ]
	then
		echo "Segfault found, Size is: $i"
	fi
done
