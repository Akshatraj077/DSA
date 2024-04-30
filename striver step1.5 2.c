// Online C compiler to run C program online
#include <stdio.h>
#include <string.h>

void f(int i,int n, char nam[20])
{
    if(i==n)
    return;
    else
    {
        i++;
        printf("%s\n",nam);
        f(i,n,nam);
    }
}
int main() 
{
    int n,i=0; char nam[20];
    printf("enter a name\n");
    gets(nam);
    printf("enter value of n\n");
    scanf("%d",&n);
    f(i,n,nam);
   
    return 0;
}