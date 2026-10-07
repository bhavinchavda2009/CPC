#include<stdio.h>
void main(){
    int a=10;
    float b=20.50;
    double c=30.50;
    char d='a';

    int *p1=&a;
    float *p2=&b;
    double *p3=&c;
    char *p4=&d;

    printf("%d\n",*p1);
    printf("%f\n" ,*p2);
    printf("%lf\n" ,*p3);
    printf("%c\n" ,*p4);

}