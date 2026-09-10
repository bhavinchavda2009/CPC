#include<stdio.h>
void main(){
    int n,i,j,k;
    int value;
    printf("enter no. :");
    scanf("%d" ,&n);
    for(int i = 0; i < n; i++)
    {
        for (int j=0; j<n-i;j++)
    {
        printf(" ");

    }
    value=1;
    for(int k = 0;k<=i;k++)
    {
        printf("%d",value);
        value=value*(i-k)/(k+1);
    }
    printf("\n");
}
}