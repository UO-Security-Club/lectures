#include <stdlib.h>
#include <stdio.h>

void main(){

	int i;
	char name[] = "Hank";
	char buf[64];

	printf("What is your name?\n");
	gets(buf);

	printf("My name is: %s\n", name);

	return;
}
