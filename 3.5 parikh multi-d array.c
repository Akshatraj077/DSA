// Online C compiler to run C program online
#include <stdio.h>
#define max 20

int main() {
    int a[max][max],n,i,j,b[max][max],k;
    printf("enter size of square matrix\n");
    scanf("%d",&n);
    printf("\nenter the values of matrix\n");
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    printf("\nthe matrix\n");
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            printf("%d ",a[i][j]);
        }
        printf("\n");
    }
    for(i=0;i<n;i++)
    {
        k=n-1;
        for(j=0;j<n;j++)
        {
            b[k][i]=a[i][j];
            k--;
        }
    }
    printf("\nthe rotated matrix\n");
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            printf("%d ",b[i][j]);
        }
        printf("\n");
    }

    return 0;
}