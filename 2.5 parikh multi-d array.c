// Online C compiler to run C program online
#include <stdio.h>
#define max 20

int main() 
{
    int arr[max][max],n,m,i,j,count=0;
    printf("enter the number of rows\n");
    scanf("%d",&n);
    printf("\nenter the number of coloumns\n");
    scanf("%d",&m);
    printf("\nenter the matrix\n");
    for(i=0;i<n;i++)
    {
        for(j=0;j<m;j++)
        {
            scanf("%d",&arr[i][j]);
        }
    }
    printf("\nmatrix is\n");
    for(i=0;i<n;i++)
    {
        for(j=0;j<m;j++)
        {
            printf("%d ",arr[i][j]);
        }
        printf("\n");
    }
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            if(arr[i][j]!=arr[j][i]){
                count=1;
                break;
            }
        }
        if(count==1)
        break;
    }
    if(count!=1)
    printf("\nit is symetric matrix\n");
    else
    printf("\nit is not a symetric matrix\n");
    /*printf("\ntranspose matrix is\n");
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            printf("%d ",b[i][j]);
        }
        printf("\n");
    }*/
    return 0;
}