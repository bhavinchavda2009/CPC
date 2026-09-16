#include <stdio.h>
void main()
{
    int i = 1, j, k, n = 5;
    for (i = 1; i <= n; i++)
    {
        for (k = 1; k <= 5 - i; k++)
        {
            printf(" ");
        }
        for (j = 1; j <= i; j++)
        {
            printf("%d ", j);
        }
        printf("\n");
    }
}