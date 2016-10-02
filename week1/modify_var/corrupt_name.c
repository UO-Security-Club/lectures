#include <stdlib.h>
#include <stdio.h>
#include <string.h>

void main()
{
	char name[] = "Bob\0";
	char buf[12];

	puts("What's you name?");

	gets(buf);

	printf("jk don't care.. \nMy name is %s\n", name);

	return;
}
