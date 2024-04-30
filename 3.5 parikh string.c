#include <stdio.h>
#include <string.h>
#define max 100

int main() {
    char str[max];int i,len,count=0,cnt=0,diff;
    printf("enter a string with only opening and closing parenthesis\n");
    gets(str);
    len=strlen(str);
    for(i=0;i<len;i++)
    {
        if(str[i]=='(')
        count++;
        else
        cnt++;
    }
    printf("\n( ->%d",count);
    printf("\n) ->%d",cnt);
    if(count>cnt){
        diff=count-cnt;
        while(diff!=0){
            str[len]=')';
            len++;
            diff--;
        }
    }
    if(cnt>count){
        diff=cnt-count;
        while(diff!=0){
            str[len]='(';
            len++;
            diff--;
        }
    }
    printf("\n");
    puts(str);
    return 0;
}