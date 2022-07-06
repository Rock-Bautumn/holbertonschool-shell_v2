# -*- MakeFile -*-

all: hls

hls: main.c
	gcc -Wall -Wextra -Werror -pedantic -std=gnu89 *.c -o hls
