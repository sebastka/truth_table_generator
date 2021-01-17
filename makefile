#
#	Makefile
#

# 	Define some Makefile variables for the compiler and compiler flags
# 	to use Makefile variables later in the Makefile:
#
#	-g						adds debugging information to the executable file
#	-Wall					turns on most, but not all, compiler warnings
#	-std=c89				coding in ansi c for extra challenge
#	-Wall					turns on extra warnings
#	-Wextra					turns on extra warnings
#	-Wpedantic				issue all the warnings demanded by strict ISO C and ISO C++
#							and reject forbidden extensions
#	-Wmissing-prototypes	extra warnings
#	-Wstrict-prototypes		extra warnings

CC = gcc
CFLAGS = -g -std=c89 -x c -Wall -Wextra -Wpedantic -Wmissing-prototypes -Wstrict-prototypes

#
#	Targets
#

all: truth_table

truth_table: main.c
	$(CC) $(CFLAGS) -g main.c -o truth_table

#
#	clean: Remove executables
#

clean:
	$(RM) truth_table
