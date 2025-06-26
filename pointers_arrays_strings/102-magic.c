#include <stdio.h>

int main(void)
{
    int a[5] = {0, 1, 2, 3, 4};
    int *p;

    p = a;

    /* Your task is to add the following line on line 19 */
    *(p + 2) = 98;  /* This changes a[2] to 98 */

    printf("a[2] = %d\n", a[2]);  /* This will print "a[2] = 98" */

    return 0;
}
