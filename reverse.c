#include <stdio.h>
#include <string.h>

static inline void __reverse(char s[], int i, int j)
{
	char c;

	if (i < j) {
		c    = s[i];
		s[i] = s[j];
		s[j] = c;
		__reverse(s, ++i, --j);	//caution: ++/-- has side effect
	}
}

void reverse(char s[])
{
	__reverse(s, 0, strlen(s) - 1);
}

main()
{
	char s[] = "abcdefghijklmnopqrstuvwxyz";
	printf("%s\n", s);
	reverse(s);
	printf("%s\n", s);
}
