#include<stdio.h>
void main(){
    int n,fac=0;
    float ans=1;
    printf("enter no. :");
    scanf("%d" ,&n);
    for (int i = 1; i<=n; i++)
    {
        for(int j = 1; j <= i; j++)
        {
            fac*=j;
        }
        ans+=1.0/fac;
    }
    printf("%f", ans);
}