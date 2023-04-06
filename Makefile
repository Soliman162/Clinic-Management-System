GCC = gcc
LD - ld
SRC = main.c functions.c
C_FLAGS = -ggdb3 -Og

all : link

compile : $(SRC)
	$(GCC) -c $(C_FLAGS) -o main.o main.c
	$(GCC) -c $(C_FLAGS) -o functions.o functions.c

link : compile 
	$(LD) -o main.exe main.o functions.o




