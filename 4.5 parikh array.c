#include <stdio.h>
#define max 100

int main() {
    int i,arr[max],n,sum1,sum,j,count=0;
    printf("enter the value of n\n");
    scanf("%d",&n);
    printf("enter the elements of array\n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=1;i<n-1;i++)
    {
        sum1=sum=0;
        for(j=0;j<i;j++)
        {
            sum1=sum1+arr[j];
        }
        for(j=i+1;j<n;j++)
        {
            sum=sum+arr[j];
        }
        if(sum1==sum){
            printf("equilibrium index is %d\n",i);
            count=1;
            break;
        }
    }
    if(count==0)
    printf("there's no equilibrium index\n");
    
    return 0;
}