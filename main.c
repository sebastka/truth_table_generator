#include <stdio.h>
#include "config.h"

/* 
 *	Truth Table Generator
 *		Prints a truth value table to stdout
 *
 *	See config.h before running
 */

#define A bits[0]
#define B bits[1]
#define C bits[2]
#define D bits[3]
#define E bits[4]
#define F bits[5]
#define G bits[6]
#define H bits[7]
#define I bits[8]
#define J bits[9]
#define K bits[10]
#define L bits[11]
#define M bits[12]
#define N bits[13]
#define O bits[14]
#define P bits[15]
#define Q bits[16]
#define R bits[17]
#define S bits[18]
#define T bits[19]
#define U bits[20]
#define V bits[21]
#define W bits[22]
#define X bits[23]
#define Y bits[24]
#define Z bits[25]

void print_separator(void);
unsigned char power(unsigned char, unsigned char);

int main(void)
{
	unsigned char bits[NB] = { 0 };
	unsigned char i = 0, j = 0;

	/* Table Header */
	print_separator();
	for (i = 0; i < NB; ++i)
		printf("%c | ", 'A' + i);
	printf("Custom test\n");

	print_separator();

	/* Lines */
	for (i = 0; i < power(2, NB); ++i) {
		/* Populate bits[] */
		for (j = NB; j > 0; --j)
			bits[NB-j] = (i >>(j-1)) &1U;

		/* Print each bit in corresponding column */
		for (j = 0; j < NB; ++j)
			printf("%i | ", bits[j]);

		/* Print test result */
		printf("%5i", (TEST));

		printf("\n");
	}

	/* Table footer */
	print_separator();

	return 0;
}

unsigned char power(unsigned char n, unsigned char p) {
	unsigned char r = 1;

	for (; p > 0; --p)
		r *= n;

	return r;
}

void print_separator(void)
{
	unsigned char i = 0;

	for (i = 0; i < (4*NB-1)+12; ++i)
		printf("-");

	printf("\n");
}
