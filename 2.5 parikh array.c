// Online C compiler to run C program online
#include <stdio.h>
#define max 100

int main() {
   int arr[max],i,k,n,temp,j;
   printf("enter the value of n\n");
   scanf("%d",&n);
   printf("enter the elements in array\n");
   for(i=0;i<n;i++)
   {
       scanf("%d",&arr[i]);
   }
   printf("enter the value of k\n");
   scanf("%d",&k);
   printf("\noriginal array is\n");
   for(i=0;i<n;i++)
   {
       printf("%d ",arr[i]);
   }
   for(i=0;i<k;i++)
   {
       temp=arr[0];
       for(j=0;j<n-1;j++)
       {
           arr[j]=arr[j+1];
       }
       arr[n-1]=temp;
   }
   printf("\nrotated array is\n");
   for(i=0;i<n;i++)
   {
       printf("%d ",arr[i]);
   }
    return 0;
}