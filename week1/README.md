#Demos
This directory contains all the material used for native demos from our first lecture.
It's a little disorganized but this is what it contains:

#../week1/
	compile_prog.sh		compile's the png_overflow program
	png_exploit.py		python script that creates the exploitative input 'payload' for png_overflow
	png_img.py		python script that creates a 'fake_img' input for png_overflow

#../week1/headers/
	contains header files for png_overflow

#../week1/source/
	contains source files for png_overflow

#../week1/strFormat_example/
	contains executable with format string vulnerability and it's source code

#../week1/re_example/
	contains a simple executable and it's source code. If you can reverse the main() function of the executable,
	you're off to a great start!

#../week1/modify_var/
	corrupt_name		executable with buffer overflow vulnerability
	corrupt_name.c		source code for above program
	input.py		python script that creates input for above program. This input will overflow the 'name[]' variable with ASS
	input2.py		python script that creates input for overflowing the program's return address and subverts execution flow to recall main() function several times.

There might be some core files laying around but you can trash them
