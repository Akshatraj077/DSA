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
   for(i=n-1;i>=0;i--)
   {
       for(j=0;j<=i-1;j++)
       {
           if(a[j]>a[j+1]){
               temp=a[j];
               a[j]=a[j+1];
               a[j+1]=temp;
           }
       }
   }
   printf("\nthe sorted array is\n");
   for(i=0;i<n;i++)
   {
       printf(" %d",a[i]);
   }
    return 0;
}