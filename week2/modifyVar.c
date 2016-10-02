#include <stdlib.h>
#include <stdio.h>

void main(){

	int modify = 0;
	char buf[64];

	printf("modify = 0x%08x\n", modify);
	printf("change it to: 0x4b4e4148\n");
	gets(buf);

	if(modify == 0x4b4e4148){
		printf("Well done!\n");
	}else{
		printf("Nope, modify = 0x%08x\n", modify);
	}

	return;
	
}
