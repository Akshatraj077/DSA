// Online C compiler to run C program online
#include <stdio.h>
#define max 100

int main() {
   int a[max],i,j,n,temp,min;
   printf("enter the emenets in the array\n");
   scanf("%d",&n);
   printf("enter the elements of array\n");
   for(i=0;i<n;i++)
   {
       scanf("%d",&a[i]);
   }
   printf("the unsorted array is\n");
   for(i=0;i<n;i++)
   {
       printf(" %d",a[i]);
   }
   for(i=0;i<=n-2;i++)
   {
       min=i;
       for(j=i;j<=n-1;j++)
       {
           if(a[j]<a[min])
           min=j;
       }
       temp=a[min];
       a[min]=a[i];
       a[i]=temp;
   }
   printf("\nthe sorted array is\n");
   for(i=0;i<n;i++)
   {
       printf(" %d",a[i]);
   }
    return 0;
}