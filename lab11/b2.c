#include<stdio.h>
void main(){

    int n,num;
    printf("enter no. :");
    scanf("%d" ,&n);
    

    for(int i =0; i<=9;i++){
    int temp=n;
    int count=0;
    while (temp!=0)
    {
        if(temp%10==i)
        count++;
        temp=temp/10;
    }
    printf("%d %d" ,i,count);
    }

}