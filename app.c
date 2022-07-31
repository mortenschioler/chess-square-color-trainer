#include "lib.h"
#include "getch.h"
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
	srand(time(NULL));

	int square;
	char square_hr[3];
new:	square = rand() % 64;
	square_name(square_hr, square);
	printf("%s:", square_hr);
	fflush(stdout);
	int color_actual, color_answered;
	char ans;
prompt: ans = getch(stdin);
	switch (ans) {
		case 'l': color_answered = 0; break;
		case 'd': color_answered = 1; break;
		default: goto prompt;
	}
	printf("%c",ans);
	color_actual = square_color(square);
        if (color_actual == color_answered) printf("✓\n");
	else printf("✗\n");
	goto new;
}
