//Utilities.c - function definitions for utilities

#include <stdio.h>
#include "Utilities.h"
void utilClearInputBuffer(void) {
	char c;
	do {
		c = getchar();//gets one character from the input buffer
	} while (c != '\n');
}