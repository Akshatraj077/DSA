#include <stdio.h>
#include <ctype.h>

char stack[100];
int top =-1;

void push(char ch)
{
    stack[++top]=ch;
}

int pop()
{
    if(top==-1)
     return -1;
    else 
     return stack[top--];
}

int priority(char ch)
{
    if(ch=='+' || ch=='-')
     return 1;
    else if(ch=='*' || ch=='/')
     return 2;
    return 0;
}

int main()
{
    char *e,x,exp[100];
    printf("enter the infix expression\n");
    scanf("%s",&exp);
    printf("\n");
    e= exp;
    
    while(*e!='\0'){
        if(isalnum(*e))
          printf("%c",*e);
        else if(*e=='(')
          push(*e);
        else if(*e==')'){
            while((x=pop())!='(')
              printf(" %c",x);
        }
        else{
            while(priority(stack[top])>=priority(*e))
                printf(" %c",pop());
            push(*e);
        }
        e++;
    }
    while(top!=-1){
        printf(" %c",pop());
    }
    return 0;
}