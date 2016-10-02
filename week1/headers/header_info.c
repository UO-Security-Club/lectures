#include "header_info.h"

int getHeader(struct png_img * png_ptr)
{
	int i;

        if((scanf("%d %d %d", &png_ptr->mode, &png_ptr->size, &PNG_HAVE_PLTE)) < 0)
        {
                puts("Error Retrieving Header Info\n");
                return(-1);
        }else{
                printf("PNG Header Info:\nMode: %d\nSize: %d\nPLTE: %d\n", png_ptr->mode, png_ptr->size, PNG_HAVE_PLTE);
        }

	png_ptr->data_buf = malloc(png_ptr->size);
	fgets(png_ptr->data_buf, png_ptr->size, stdin);

        if(png_ptr->mode == 1)
	{
                png_ptr->num_palette = 63;
        }else{
                png_ptr->num_palette = 127;
	}

        return(png_ptr->size);
}

void png_read(struct png_img * png_ptr, char * readbuf, int length)
{
	if((memcpy(readbuf, png_ptr->data_buf, length)) < 0)
	{
		puts("Error reading image\n");
		exit(-1);
	}
	readbuf[63] = '\0';
	return;
}

void initStruct(struct png_img *png_ptr)
{
	png_ptr->mode = 0;
        png_ptr->size = 0;
        png_ptr->num_palette = 0;
        PNG_HAVE_PLTE = 0;

	return;
}




