// Online C compiler to run C program online
#include <stdio.h>
#define max 100

int main() {
   int a[max],i,j,n,temp,min,check;
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
   for(i=0;i<n;i++)
   {
       j=i;
       while(j>0 && a[j-1]>a[j]){
           temp=a[j-1];
           a[j-1]=a[j];
           a[j]=temp;
           j--;
       }
   }
   printf("\nthe sorted array is\n");
   for(i=0;i<n;i++)
   {
       printf(" %d",a[i]);
   }
    return 0;
}