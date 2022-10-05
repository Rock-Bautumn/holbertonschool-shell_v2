# -*- MakeFile -*-

all: hsh

hsh: main.c iterate_plist.c
	gcc -Wall -Wextra -Werror -pedantic -std=gnu89 -g *.c -o hsh

clean: hsh
	rm hsh
