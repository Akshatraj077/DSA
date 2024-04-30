#include <stdio.h>

void printSpiral(int b[10][10], int n, int m) 
{
    int i ,k=0,l=0;
    while(k<n && l<m){
        for(i=l;i<m;i++)   //first row
        {
            printf("%d ",b[k][i]);
        }
        k++;
        for(i=k;i<n;i++)   //last coloumn
        {
            printf("%d ",b[i][m-1]);
        }
        m--;
        if(k<n){             //last row
            for(i=m-1;i>=l;i--)
            {
                printf("%d ",b[n-1][i]);
            }
            n--;
        }
        if(l<m){              //first coloumn
            for(i=n-1;i>=k;i--)
            {
                printf("%d ",b[i][l]);
            }
            l++;
        }
    }
}

int main() {
    int matrix[10][10];
    int m, n;

    printf("Enter the number of rows: ");
    scanf("%d", &m);
    printf("Enter the number of columns: ");
    scanf("%d", &n);

    printf("Enter the elements of the matrix:\n");
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }
    
    printf("the matrix\n");
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }

    printf("Matrix in spiral order:\n");
    printSpiral(matrix, m, n);

    return 0;
}