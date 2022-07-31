#include"lib.h"
#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int fails = 0;

int test_square_color(int square, int expected_color) {
	int res = square_color (square);
	if (expected_color == res) 
		printf(".");
	else {
		printf("Expected square color %d, got %d.\n", expected_color, res);
		fails++;
	}
}

int test_square_name(int square, char* expected_name) {
	char name[3];
	square_name(name, square);
	if (strcmp(name, expected_name) == 0) 
		printf(".");
	else {
		printf("Expected square color %s, got %s.\n", expected_name, name);
		fails++;
	}
}

int main () {
	test_square_color(0,0);
	test_square_color(1,1);
	test_square_color(8,1);
	test_square_color(63,0);
	test_square_name(0, "a8");
	test_square_name(1, "b8");
	test_square_name(8, "a7");
	test_square_name(62, "g1");
	printf("\n");
	return fails>0;
}
