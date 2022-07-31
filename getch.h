/* Gets a single character from the terminal stream (stdin),
 * without printing that character and without line buffering
 * (i.e. the user will not have to press enter for this function
 * to accept an input character and return it, unlike getc()) */
char getch();
