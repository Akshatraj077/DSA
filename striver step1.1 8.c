#include <stdio.h>

int maximum(int , int );
void swap(int *, int *);

int maximum(int a, int b)
{
   if(a>b)
   return a;
   else if(b>a)
   return b;
   else
   return 0;
}
void swap(int *a, int *b)
{
    int c;
    c=*a;
    *a=*b;
    *b=c;
    printf("swaped value is n1=%d & n2=%d\n",*a,*b);
}
int main() 
{
    int ch;
    printf("enter your choice\n 1.to find max no\n 2.to swap values\n");
    scanf("%d",&ch);
    switch(ch)
    {
        case 1:
        int n,n1,n2;
        printf("enter 2 numbers\n");
        scanf("%d",&n1);
        scanf("%d",&n2);
        n= maximum(n1,n2);
        printf("maximum is %d\n",n);
        break;
        case 2:
        printf("enter 2 numbers\n");
        scanf("%d",&n1);
        scanf("%d",&n2);
        printf("original value is n1=%d & n2=%d\n",n1,n2);
        swap( &n1, &n2);
        break;
        default:
        printf("invalid choice\n");
    }
    return 0;
}