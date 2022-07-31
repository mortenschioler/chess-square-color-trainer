#include "lib.h"

int square_color(int square) {
	return 1 & square + (square >> 3);
}

void square_name(char *square_hr, int square) {
	int file, rank;
	file = square % 8;
	rank = square / 8;
	square_hr[0] = 'a' + file;
	square_hr[1] = '8' - rank;
	square_hr[2] = '\0';
}
