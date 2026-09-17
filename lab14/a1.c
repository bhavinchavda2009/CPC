#include<stdio.h>
void main(){
    int n,i=1;
    printf("enter number :");
    scanf("%d ",&n);
    int arr[n];


    
    for(i=0;i<n;i++)
    {
		printf("enter [%d]th number : ",i);
        scanf("%d",&arr[i]);
    }
    for(i=0;i<n;i++)
    {
        printf("%d",arr[i]);
    }
    for(i=n-1;i>=0;i--)
    {
        printf("%d",arr[i]);
    }
    
    
    

}