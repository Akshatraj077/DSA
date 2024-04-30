#include <stdio.h>
#define max 100

int main() {
    int i,arr[max],n,sum1,sum,j,count;
    printf("enter the value of n\n");
    scanf("%d",&n);
    printf("enter the elements of array\n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=1;i<=max;i++)
    {
        count=0;
        for(j=0;j<n;j++)
        {
            if(i==arr[j])
            break;
            count=count+1;
        }
        if(count==n){
            printf("\n%d is lowest +ve integer missing",i);
            break;
        }
    }
    return 0;
}