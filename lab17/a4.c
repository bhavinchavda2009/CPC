#include <stdio.h>
void main()
{
    int a = 60, b = 50, temp;
    int *p1 = &a;
    int *p2 = &b;

    temp = *p1;
    *p1 = *p2;
    *p2 = temp;

    printf("%d %d", *p1, *p2);
}