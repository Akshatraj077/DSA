#include <stdio.h>
#include <string.h>
#define max 100

int main() {
    char str[max],str1[max];int i,j,len,a[max]={0},count=0;
    printf("enter the string\n");
    gets(str);
    len=strlen(str);
    int start=0;
    for(i=0;i<len;i++)
    {
        for(j=i;j<len;j++)
        {
            if(str[i]==str[j]){
                a[i]=a[i]+1;
                str1[i]=str[i];
            }
            else{
                break;
            }
        }
        a[start]=a[i];
        str1[start]=str1[i];
        start++;
        i=j-1;
        count++;
    }
    printf("\n");
    for(i=0;i<count;i++)
    {
        printf("%c%d",str1[i],a[i]);
    }
    return 0;
}