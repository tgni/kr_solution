#include <stdio.h>
int main()
{
        int *p[5];
        int *q = NULL;
        int a[5] = {1, 2, 3, 4, 5};
        int index;
        *p = a;
        for(index = 0; index < 5; index++){
                printf("addr: %x ", p[index]);
                printf("value: %x \n",*p[index]);
        }

        printf("\n");
        q = *p; 
        for(index = 0; index < 5; index++){
                printf("addr: %x ", &q[index]);
                printf("value: %x \n", q[index]);
        }

        return 0;

}
