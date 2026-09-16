#include <stdio.h>
void main()
{
    int i = 1, count;
    char a='A';
    for (i = 5; i >= 5; i++)
    {
        for (int k = 1; k <= 5 - i; k++)
        {

            printf(" ");
        }
        for (int j=1 ; j<=i; j++)
        {
            if(i % 2==0){
                printf("%c ",a);
                a++;
            }else{
                printf("%d ",j);
            }
        
        }
        
        
        printf("\n");
    }
}