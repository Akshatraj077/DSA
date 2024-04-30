// Online C compiler to run C program online
#include <stdio.h>
#define max 20

int main() {
    int a[max][max],n,m,i,j,k,b[max][max];
    printf("enter row of square matrix\n");
    scanf("%d",&n);
    printf("enter coloumn of square matrix\n");
    scanf("%d",&m);
    printf("\nenter the values of matrix\n");
    for(i=0;i<n;i++)
    {
        for(j=0;j<m;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    for(i=0;i<n;i++)
    {
        for(j=0;j<m;j++)
        {
            b[i][j]=1;
        }
    }
    printf("\nthe matrix\n");
    for(i=0;i<n;i++)
    {
        for(j=0;j<m;j++)
        {
            printf("%d ",a[i][j]);
        }
        printf("\n");
    }
    for(i=0;i<n;i++)
    {
        for(j=0;j<m;j++)
        {
            if(a[i][j]==0){
                k=0;
                while(k<m){
                    b[i][k]=0;
                    k++;
                }
                k=0;
                while(k<n){
                    b[k][j]=0;
                    k++;
                }
            }
            if(b[i][j]!=0)
            b[i][j]=a[i][j];
        }
    }
    
    printf("\nthe updated matrix\n");
    for(i=0;i<n;i++)
    {
        for(j=0;j<m;j++)
        {
            printf("%d ",b[i][j]);
        }
        printf("\n");
    }

    return 0;
}