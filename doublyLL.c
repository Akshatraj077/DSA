// Online C compiler to run C program online
#include <stdio.h>
#include <stdlib.h>

typedef struct node
{
    int data;struct node* next,*prev;
}nod;

void insert(nod**head)
{
    nod*temp,*newnode;int pos,i=0;
    printf("enter the position\n");
    scanf("%d",&pos);
    newnode=(nod*)malloc(sizeof(nod));
    printf("enter data\n");
    scanf("%d",&newnode->data);
    newnode->next=newnode->prev=0;
    temp=*head;
    if(pos==0)
    {
        newnode->next=*head;
        *head=newnode;
    }
    else
    {
        while(i<pos-1)
        {
            temp=temp->next;
            i++;
        }
        newnode->next=temp->next;
        newnode->prev=temp;
        temp->next=newnode;
        temp=newnode->next;
        temp->prev=newnode;
    }
    temp=*head;
    printf("the new data is\n");
    while(temp!=0)
    {
        printf("%d\n",temp->data);
        temp=temp->next;
    }
}

void deletion(nod**head)
{
    nod*temp,*temp1;int pos,i=0;
    printf("enter the position\n");
    scanf("%d",&pos);
    temp=*head;
    if(pos==0)
    {
        *head=temp->next;
        temp->next->prev=0;
        free(temp);
    }
    else
    {
        while(i<pos-1)
        {
            temp=temp->next;
            i++;
        }
        temp1=temp->next;
        temp->next=temp1->next;
        temp1->next->prev=temp;
        free(temp1);
    }
    temp=*head;
    printf("the new data is\n");
    while(temp!=0)
    {
        printf("%d\n",temp->data);
        temp=temp->next;
    }
}

void reverse(nod**head)
{
    nod*temp,*crnode;
    crnode=*head;
    temp=0;
    while(crnode!=0)
    {
        temp=crnode->prev;
        crnode->prev=crnode->next;
        crnode->next=temp;
        crnode=crnode->prev;
    }
    if(temp!=0)
    *head=temp->prev;
    temp=*head;
    printf("the new data is\n");
    while(temp!=0)
    {
        printf("%d\n",temp->data);
        temp=temp->next;
    }
}

int main() 
{
    nod*head,*temp,*newnode;int ch=1;
    head=0;
    while(ch==1)
    {
        newnode=(nod*)malloc(sizeof(nod));
        printf("enter data\n");
        scanf("%d",&newnode->data);
        newnode->next=newnode->prev=0;
        if(head==0)
        head=temp=newnode;
        else
        {
            temp->next=newnode;
            newnode->prev=temp;
            temp=temp->next;
        }
        printf("want to continue?0,1\n");
        scanf("%d",&ch);
    }
    temp=head;
    printf("the data is\n");
    while(temp!=0)
    {
        printf("%d\n",temp->data);
        temp=temp->next;
    }
    printf("choose\n1.end\n2.insert\n3.delete\n4.reverse\n");
    scanf("%d",&ch);
    switch(ch)
    {
        case 1:
        printf("happy ending\n");
        break;
        case 2:
        insert(&head);
        break;
        case 3:
        deletion(&head);
        break;
        case 4:
        reverse(&head);
        break;
        default:
        printf("invalid choice\n");
    }
    return 0;
}