// Online C compiler to run C program online
#include <stdio.h>

int fib(int n)
{
    if(n==0)
    return 0;
    else if(n==1)
    return 1;
    else
    {
        int last=fib(n-1);
        int slast=fib(n-2);
        return (last+slast);
    }
}
int main() {
    int n,i;
    printf("enter the value of n\n");
    scanf("%d",&n);
    for(i=0;i<=n;i++)
    {
        printf("%d ",fib(i));
    }
    return 0;
}