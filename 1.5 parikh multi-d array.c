// Online C compiler to run C program online
#include <stdio.h>
#define max 20

int main() {
    int arr[max][max],n,m,i,j,sum=0;
    printf("enter the number of rows\n");
    scanf("%d",&n);
    printf("\nenter the number of coloumns\n");
    scanf("%d",&m);
    printf("\nenter the binary digit matrix\n");
    for(i=0;i<n;i++)
    {
        for(j=0;j<m;j++)
        {
            scanf("%d",&arr[i][j]);
        }
    }
    printf("\narray is\n");
    for(i=0;i<n;i++)
    {
        for(j=0;j<m;j++)
        {
            printf("%d ",arr[i][j]);
        }
        printf("\n");
    }
    for(i=0;i<n;i++)
    {
        for(j=0;j<m;j++)
        {
           if(arr[i][j]==0){
               if(j+1<m)
               sum=sum+arr[i][j+1];
               if(j-1>=0)
               sum=sum+arr[i][j-1];
               if(i+1<n)
               sum=sum+arr[i+1][j];
               if(i-1>=0)
               sum=sum+arr[i-1][j];
           }
        }
    }
    printf("\nsum of coverages of zeros is %d",sum);

    return 0;
}