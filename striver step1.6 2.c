// Online C compiler to run C program online
#include <stdio.h>
#define MAX 20

int main() {
   int n,i,a[MAX],b[MAX]={0},c=0,q,n1;
   printf("enter the size of array\n");
   scanf("%d",&n);
   printf("enter the elements of array\n");
   for(i=0;i<n;i++)
   {
       scanf("%d",&a[i]);
   }
   for(i=0;i<n;i++)
   {
       b[a[i]]++;
   }
   printf("enter the number of queries\n");
   scanf("%d",&q);
   while(q--)
   {
       printf("enter the number you want to search\n");
       scanf("%d",&n1);
       printf("%d appears %d times\n",n1,b[n1]);
   }
    return 0;
}



// Online C compiler to run C program online
//to do for a string (same question)(generlly this can be done using usual method coz array can store 256 chars)
#include <stdio.h>
#include <string.h>
#define MAX 20

int main() {
   int i,b[MAX]={0},q=0,l;char a[MAX],ch;
   printf("enter the string\n");
   gets(a);
   l=strlen(a);
   for(i=0;i<l;i++)
   {
       b[a[i]-'a']++;
   }
   printf("enter the number of queries\n");
   scanf("%d",&q);
   while(q)
   {
       printf("enter the character to count\n");
       scanf("%c",&ch);
       printf("%c appears %d time(s)\n",ch,b[ch-'a']);
       q--;
   }
    return 0;
}