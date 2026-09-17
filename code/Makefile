CC = gcc
CFLAGS = -ggdb -Wall -std=c18 

# The following is the recipe for a simple one-file C program build.
# Edit this Makefile so that your asm executable builds succesfully
../asm : asm.c
	${CC} ${CFLAGS} -o ../asm asm.c  
	
clean :
	-rm ../asm
