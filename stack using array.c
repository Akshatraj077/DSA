// Online C compiler to run C program online
#include <stdio.h>
#define N 5
int stack[N];
int top=-1;

void push()
{
    int x,ch=1;
    while(ch)
    {
        if(top==N-1)
        printf("overflow\n");
        else
        {
            printf("enter the data\n");
            scanf("%d",&x);
            top++;
            stack[top]=x;
        }
        printf("want to continue?(0,1)\n");
        scanf("%d",&ch);
    }
}
void display()
{
    int i;
    if(top==-1)
    printf("empty stack\n");
    else
    {
      for(i=top;i>=0;i--)
      {
        printf("%d ",stack[i]);
      }
      printf("\n");
    }
}
void pop()
{
    if(top==-1)
    printf("underflow\n");
    else
    {
        printf("%d ",stack[top]);
        top--;
    }
}
int main() {
    int ch,c=1;
    while(c)
    {
    printf("choose\n1.push\n2.display\n3.pop\n");
    scanf("%d",&ch);
    switch(ch)
    {
        case 1:
        push();
        break;
        case 2:
        display();
        break;
        case 3:
        pop();
        break;
        default:
        printf("invalid choice\n");
    }
    printf("want to perform more operations?(0,1)\n");
    scanf("%d",&c);
    }
    return 0;
}