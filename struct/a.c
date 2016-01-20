#include <stdio.h>
#include <stdlib.h>
#include "a.h"

struct test_s {
	int i;
};

struct test_s b = {3};

void print_a(struct test_s *a)
{
	printf("%d \n", a->i);
}

void set_a(struct test_s *a)
{
	a->i = 1;
}

test_t create_a(void)
{
	return (test_t)malloc(sizeof(struct test_s));
}

void free_a(test_t a)
{
	free(a);
}
