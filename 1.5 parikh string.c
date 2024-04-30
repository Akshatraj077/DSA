#include <stdio.h>
#include <string.h>
#define max 100

void reverse(char str[max],int start,int end)
{
    while(start<end){
        char temp= str[start];
        str[start]=str[end];
        str[end]=temp;
        start++;
        end--;
    }
}

int main() {
    char str[max];int i,len,start=0,end;
    printf("enter the string\n");
    gets(str);
    len=strlen(str);
    reverse(str,0,len-1);
    for(end=0;end<=len;end++)
    {
        if(str[end]==' '||str[end]=='\0'){
            reverse(str,start,end-1);
            start=end+1;
        }
    }
    printf("\nrequired string:\n%s",str);

    return 0;
}