# -*- MakeFile -*-

all: hsh

hsh: main.c iterate_plist.c
	gcc -Wall -Wextra -Werror -pedantic -std=gnu89 *.c -o hsh
