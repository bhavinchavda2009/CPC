#include<stdio.h>
void main(){
    int n,i,sum =0;
    float avg;
    printf("enter number :");
    scanf("%d ",&n);
    int arr[n];

     for(i=0;i<n;i++)
    {
		printf("enter [%d]th number : ",i);
        scanf("%d",&arr[i]);
        sum=sum+arr[i];
    }
    printf("sum%d", sum);
    avg=(float)sum/n;
    int min=arr[0],max=arr[0];
    for (int i = 0; i < n; i++)
    {
        if (arr[i]<min)
        {
            min=arr[i];
        }
        if (arr[i]>max)
        {
            max=arr[i];
        }
        
        
    }
    printf("avg%f min%d max%d ",avg,min,max);
    
    
    
    
    

}