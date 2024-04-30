// Online C compiler to run C program online
#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#define max 100

bool ispalindrome(char str[])
{
    int len,i=0,j;
    len=strlen(str);
    j=len-1;
    while(i<j){
        if(str[i]!=str[j]){
            return false;
        }
        i++;
        j--;
    }
    return true;
}

int main() {
  char str[max];int c;
  printf("enter the palindorme string number\n");
  gets(str);
  
  c = ispalindrome(str);
  
  if(c==0){
      printf("the given num is not palindrome\n");
      return 1;
  }
  
  int num;
  sscanf(str,"%d",&num);
  
  while(true){
      num++;
      sprintf(str,"%d",num);
      if(ispalindrome(str)){
          printf("next smallest palindrome no is %s\n",str);
          break;
      }
  }
  
    return 0;
}