#include <stdio.h>
void main()
{
    int i = 1, j, k, n = 5 ,count=1;
    for (i = 1; i <= n; i++)
    {
        for (j = 1; j <= i; j++)
        {

            printf("%d ", count);
            count++;
        }
        
        printf("\n");
    }
}