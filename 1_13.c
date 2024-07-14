#include <stdio.h>

int main(void)
{
	int c, i, j, quan[127];

	while ((c = getchar()) != 'EOF') {
		++quan[c - 1];
	}

	for (i = 0 ; i <= 125 ; ++i) {
		for (j = 0 ; j <= quan[i] ; ++j) {
			putchar('=');
		} 
		putchar('\n');
	}
}
