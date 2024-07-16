#include <stdio.h>

int convert(int fahr);

int main()
{
	int fahr, celsius;
	int lower, upper, step;
	lower = 0;
	upper = 300;
	step = 20;
	fahr = lower;
	while (fahr <= upper) {
		celsius = convert(fahr);
		printf("|%3d|%3d|\n", fahr, celsius);
		fahr += step;
	}

	return 0;
}

int convert(int fahr)
{ 
	return 5 * (fahr-32) / 9;
}
