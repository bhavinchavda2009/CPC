#include<stdio.h>
void main(){
    int n,temp;
    int first,last;
    int dig = 0;
    int divisor=1;

    printf("enter");
    scanf("%d" ,&n);

    temp=n;
    last=n%10;

    while(temp>10);
    {
        temp=temp/10;
        dig++;
    }
    
}