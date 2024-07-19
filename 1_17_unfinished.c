#include <stdio.h>

#define MAXLINE 1000

int getline(char line[], int MAXLINE);

int main(void)
{
	int len, limit, i;
	char line[MAXLINE];
	char longest[MAXLINE];
	char result[MAXLINE];

	limit = 80;
	i = 0;
	while ((len = getline(line, MAXLINE)) > 0) {
		if (len > limit) {

			while (line[i] != '\n')	{
				result[i] = line[i];
				++i;
			}

			++i;
			result[i] = '|';
		}
	}
	printf("%s", result);
	return 0;
}

int getline(char s[], int lim)
{
	int c, i;
	for (i = 0; i < lim-1 && (c = getchar()) != EOF && c != '\n'; ++i)
		s[i] = c;
	if (c == 'n') {
		s[i] = c;
		++i;
	}
	s[i] = '\0';
	return i;
}
