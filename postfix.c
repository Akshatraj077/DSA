#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>
#define max 100

typedef struct stack{
    int data[max],top;
}stak;

void push(stak *stack,int value)
{
    if(stack->top==max-1){
        printf("overflow\n");
        exit(1);
    }
    stack->data[++stack->top]=value;
}

int pop(stak *stack)
{
    if(stack->top==-1){
        printf("underflow\n");
        exit(1);
    }
    return stack->data[stack->top--];
}

int evaluate(char *exp)
{
    stak stack;int i;
    stack.top=-1;
    for(i=0;exp[i];i++)
    {
        if(isdigit(exp[i])){
            push(&stack, exp[i]-'0');
        }
        else{
            int op2=pop(&stack);
            int op1=pop(&stack);
            switch(exp[i])
            {
                case'+': push(&stack, op2+op1);
                          break;
                case'-': push(&stack, op1-op2);
                         break;
                case'*': push(&stack, op1*op2);
                         break;
                case'/': push(&stack, op1/op2);
                         break;
                default: printf("invalid exp\n");
                         exit(1);
            }
        }
    }
    return pop(&stack);
}

int main() 
{
    char exp[max];int result;
    printf("enter the expresion\n");
    scanf("%s",&exp);
    
    result= evaluate(exp);
    printf("resultant is %d",result);
    
    return 0;
}