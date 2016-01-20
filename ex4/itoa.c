#include <stdio.h>

/* Not solve to print max minus number -2^31 */

char *itoa(int n, char s[])
{
	if (n < 0) {
		*s++ = '-';	
		n = -n; 
	}
	if (n / 10)
		s = itoa(n / 10, s);	

	*s++ = n % 10 + '0';
	*s   = '\0';
}

main()
{
	int i = -12345678;
	char s[100];

	itoa(i, s);
	printf("%s\n", s);
	
	int j = -2345;
	itoa(j, s);

	printf("%s\n", s);
}
