#include<stdio.h>
void main(){
    int n,sumj=0,sumi=0;
    printf("enter no. :");
    scanf("%d" ,&n);
    for (int i = 1; i<=n; i++)
    {
        for(int j = 1; j <= i; j++)
        {
            sumj=sumj+j;
        }
        sumi += sumj;
    }
    printf("%d", sumi);
}