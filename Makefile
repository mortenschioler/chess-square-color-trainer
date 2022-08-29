CC=gcc

.PHONY: run runtest

run: app
	./app

runtest: test
	./test


test: lib.h lib.c

app: lib.h lib.c getch.h getch.c
