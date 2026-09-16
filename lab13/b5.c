#include <stdio.h>
void main()
{
    int i = 1, n=5;
    char a='A';
    for (i = 1; i <= 5; i++)
    {
        for (int j = 1; j <= 5; j++)
        {
            if( i == 1||i==n||j==1||j==n)
            {
                printf("* ");
            }
            else{
                printf(" ");
            }
        
        
        
        }
        
        
        printf("\n");
    }
}