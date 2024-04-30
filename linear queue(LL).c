// Online C compiler to run C program online
#include <stdio.h>
#include <stdlib.h>

typedef struct node{
    int data;struct node *next;
}nod;

nod *front=NULL,*rear=NULL;

void enqueue()
{
    nod *newnode;
    newnode=(nod*)malloc(sizeof(nod));
    printf("enter data\n");
    scanf("%d",&newnode->data);
    newnode->next=0;
    if(front==NULL && rear==NULL)
        front=rear=newnode;
    else{
        rear->next=newnode;
        rear=newnode;
    }
}

void display()
{
    nod *temp;
    temp=front;
    printf("the data set is\n");
    while(temp!=NULL)
    {
        printf("%d ",temp->data);
        temp=temp->next;
    }
}

void dequeue()
{
    nod *temp;
    if(front==NULL)
        printf("underflow\n");
    else{
        temp=front;
        front=front->next;
        printf("%d",temp->data);
        free(temp);
    }
}

int main() 
{
    int ch=1,c=1;
    while(ch==1)
    {
        enqueue();
        printf("continue enqueue?(1,0)\n");
        scanf("%d",&ch);
    }
    display();
    while(c)
    {
        printf("\nchoose\n1.end\n2.dequeue\n");
        scanf("%d",&ch);
        switch(ch)
        {
            case 1: printf("happy ending\n");
                    break;
            case 2: dequeue();
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