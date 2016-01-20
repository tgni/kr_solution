#ifndef _A_H_
#define _A_H_

struct test_s;
typedef struct test_s *test_t;

extern struct test_s b;

extern void print_a(struct test_s *a);
void set_a(struct test_s *a);
test_t create_a(void);
void free_a(test_t a);

#endif
