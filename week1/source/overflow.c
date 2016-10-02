#include "../headers/header_info.h"

int getInput(struct png_img * png_ptr)
{
	int length;
	char readbuf[64];

	if((length = getHeader(png_ptr)) < 0)
		return(-1);

	/* VULNERABLE CODE LOGIC *////////////////////////
							//
	if(!(png_ptr->mode & PNG_HAVE_PLTE))		//
	{						//
		puts("Warning: Missing PLTE\n");	//
	}						//
	else if(length > png_ptr->num_palette)		//
	{						//
		puts("Incorrect data length\n");	//
		return(-1);				//
	}						//
							//
	png_read(png_ptr, readbuf, length);		//
							//
	/* END VULNERABLE CODE LOGIC *////////////////////

	printf("Got input: %s\n", readbuf);

	return(0);
}

void main()
{
	struct png_img *png_ptr = malloc(sizeof *png_ptr);
	initStruct(png_ptr);

	getInput(png_ptr);

	free(png_ptr->data_buf);
	free(png_ptr);

	return;
}
