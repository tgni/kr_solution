#include <stdio.h>
/* tiny shell simulation */
main()
{
	int c;

	while ((c = getchar()) != EOF) {
		if (c == '\n')
			putchar('>');
		else
			putchar(c);
	}
}
