#include <stdio.h>
#include "a.h"

//struct test_s c = b;
struct test_s* c = &b;

main()
{
	test_t tmp;

	tmp = create_a();
	set_a(tmp);
	print_a(tmp);

	print_a(c);
	//set_a(b);

	free_a(tmp);
	
	return 0;
}
