CC=gcc
CFLAGS=-Wall -Werror -Wextra -pedantic -fPIC 

libdynamic.so: libdynamic.c main.h
	$(CC) -shared -o libdynamic.so libdynamic.c $(CFLAGS)
