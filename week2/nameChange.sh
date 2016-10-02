#!/bin/bash

#touch output.txt

for i in {1..100}
do
	python -c "print 'A'*$i + 'Hill'" | ./nameOverflow > output.txt

	NAME=`grep Hill output.txt`

	if [ -z "$NAME" ]
	then
		echo "Input size is: $i"
	else
		echo "Input size is: $i"
		echo $NAME
		exit 1
	fi
done
