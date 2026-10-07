#include<stdio.h>
void main(){
    int a=10,b=30;
    int sum=0;

    int *p1=&a;
    int *p2=&b;

    printf("%d" ,*p1+*p2);
}