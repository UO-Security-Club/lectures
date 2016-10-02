#include <stdlib.h>
#include <stdio.h>
#include <string.h>

struct png_img{
        unsigned int mode;
        unsigned int size;
        unsigned int num_palette;
        char * data_buf;
};

unsigned int PNG_HAVE_PLTE;

int getHeader(struct png_img *png_ptr);
void png_read(struct png_img *png_ptr, char * readbuf, int length);
void initStruct(struct png_img *png_ptr);
