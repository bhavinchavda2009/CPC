#include <stdio.h>
void main()
{
    int arr[5];
    for (int i = 0; i < 5; i++)
    {
        scanf("%d" ,&arr[i]);
    }
    int *p1=arr;
    for (int i = 0; i < 5; i++)
    {
        printf("%d" ,*(p1+i));
    }
    
    
}