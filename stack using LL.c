// Online C compiler to run C program online
#include <stdio.h>
#include <stdlib.h>

typedef struct node
{
    int data;struct node *next,*prev;
}nod;

nod *top=NULL,*head=NULL;

void push()
{
    nod *newnode;
    newnode=(nod*)malloc(sizeof(nod));
    printf("enter data\n");
    scanf("%d",&newnode->data);
    newnode->next=NULL;
    newnode->prev=NULL;
    if(head==NULL)
        head=top=newnode;
    else{
        top->next=newnode;
        newnode->prev=top;
        top=top->next;
    }
}

void display()
{
    nod *temp;
    temp=head;
    while(temp!=NULL)
    {
        printf("%d ",temp->data);
        temp=temp->next;
    }
}

void pop()
{
    nod *temp;
    temp=top;
    top=top->prev;
    top->next=NULL;
    printf("%d",temp->data);
    free(temp);
}

int main() 
{
    int ch=1,c=1;
    while(ch)
    {
        push();
        printf("continue push?(1,0)\n");
        scanf("%d",&ch);
    }
    while(c)
    {
        printf("\nchoose\n1.end\n2.pop\n3.display\n4.push\n");
        scanf("%d",&ch);
        switch(ch)
        {
            case 1: printf("happy ending\n");
                    break;
            case 2: pop();
                    break;
            case 3: display();
                    break;
            case 4: push();
                    break;       
            default: printf("invalid choice\n");
        }
        if(ch==1)
        break;
        printf("\nmore task?(1,0)\n");
        scanf("%d",&c);
    }
    return 0;
}