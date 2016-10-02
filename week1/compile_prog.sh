gcc -m32 -c headers/header_info.c -o headers/header_info.o
gcc -m32 -c source/overflow.c -o source/overflow.o
gcc -m32 -mpreferred-stack-boundary=2 source/overflow.o headers/header_info.o -o png_overflow
