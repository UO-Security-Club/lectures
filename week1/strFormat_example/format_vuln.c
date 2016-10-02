#include <stdlib.h>
#include <stdio.h>
#include <string.h>

char secret[] = "Secret: Kim Kardashian is a hobbit...\0";

void keepSecret(int i, char * buf)
{
	return;
}

void main()
{
	int n;
	char buf[32];
	char * super = secret;

	puts("what's your name?");
	n = read(0, &buf[3], 28);
	buf[0] = 'h';
	buf[1] = 'i';
	buf[2] = ' ';
	buf[n+3] = '\0';
	keepSecret(1, secret);

	printf(buf);

	return;
}
