#include <stdio.h>
#include <limits.h>

int main(void)
{
	printf("char from %d to %d\n", CHAR_MIN, SCHAR_MAX);
	printf("short from %d to %d\n", SHRT_MIN, SHRT_MAX);
	printf("int from %d to %d\n", INT_MIN, INT_MAX);
	printf("long from %d to %d\n", LONG_MIN, LONG_MAX);
}
