#include <stdio.h>

int main(void)
{
	int c, spaces, tabs, nstrs;

	while ((c = getchar()) != EOF) {
		if (c == ' ')
			++spaces;
		if (c == '\t')
			++tabs;
		if (c == '\n')
			++nstrs;
	}
	printf("Char Quantity\nsp   %d\n\\t   %d\n\\n   %d", spaces, tabs, nstrs);
}
