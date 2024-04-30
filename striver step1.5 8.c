// Online C compiler to run C program online
#include <stdio.h>
#include <string.h>
#define MAX 20

void rev(char a[],int l,int r)
{
    char temp;
    if(l>=r)
    return;
    else
    {
        temp=a[l];
        a[l]=a[r];
        a[r]=temp;
        rev(a,l+1,r-1);
    }
}
int main() {
    int n;char a[MAX],b[MAX];
    printf("enter the string\n");
    gets(a);
    strcpy(b,a);
    n=strlen(a);
    rev(a,0,n-1);
    if(strcmp(a,b))
    printf("not palindrome\n");
    else
    printf("palindrome\n");
    return 0;
}