#include<stdio.h>
void main(){
    int n,i,positive=0,negetive=0;
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
    if (i%2==0)
    {
        printf("ODD\n");
    }
    else{
        printf("Even\n");
    }


    
    }
    
    
    
    

}