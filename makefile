#------------------------------------------------------------------------------#
#	Makefile for UNIX systems
#	using a GNU C compiler
#------------------------------------------------------------------------------#
CC=gcc
CFLAGS=-g -D__USE_FIXED_PROTOTYPES__ -ansi -Wall
#
# Usage: 
#	make
# 
# Compiler flags:
# 	-g	-- Enable debugging
#	-Wall	
#		-- Turn on all warnings (gives away the bug in this program)
#	-D__USE_FIXED_PROTOTYPES__
#		-- Force the compiler to use the correct headers
#	-ansi 	-- Don't use GNU extensions. Stick to ANSI C.
#
# Notes:
#	The make utility is resonsible for one of the nastiest surprises for 
#	unsuspecting users. The line: 
# 	$(CC) $(CFLAGS) -o calc calc.c 
#	must begin with a tab. Eight spaces won't work. A space and a tab 
#	won't work. The line must start with a tab. Check your editor and make 
# 	sure that you can tell the difference between a tab and a bunch of 
#	spaces. 
# 

calc: dater.c
	$(CC) $(CFLAGS) -o dater dater.c

clean:
	rm -f dater
