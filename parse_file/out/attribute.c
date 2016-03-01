#include <stdio.h>
#if 0
struct e_struct {
        char a;
        int b;
        long c;
} __attribute__ ((aligned(4)));
struct e_struct {
        char a;
        int b __attribute__ ((packed));
        long c __attribute__ ((packed));
};
#else

struct e_struct {
        char a;
        int b;
        long c;
} __attribute__ ((packed));
#endif

int main(void)
{
        printf("%d\n", sizeof(struct e_struct));
}
