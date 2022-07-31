/* Squares are represented as integers between 0 and 63 (inclusive).
 * Indexing is in the same order as pieces are encoded into a FEN,
 * meaning a8 is 0, b8 is 1, a7 is 8, etc. */

// return 0 for light squares and 1 for dark squares.
int square_color(int square);

// Write the appropriate string representation of the given square to 
// the given string (3 chars).
void square_name(char *square_hr, int square);
