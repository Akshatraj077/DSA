// Online C compiler to run C program online
#include <stdio.h>
#include <stdlib.h>

typedef struct node{
    int data;struct node *next;
}nod;

void insert(nod **head)
{
    int pos,i=1;nod *newnode,*temp;
    printf("enter the position you want to insert\n");
    scanf("%d",&pos);
    newnode=(nod*)malloc(sizeof(nod));
    printf("enter the data\n");
    scanf("%d",&newnode->data);
    newnode->next=0;
    temp=*head;
    if(pos<0){
        printf("invalid position\n");
    }
    else if(pos==1){
        newnode->next=*head;
        *head=newnode;
    }
    else{
        while(i<pos-1){
            temp=temp->next;
            i++;
        }
        newnode->next=temp->next;
        temp->next=newnode;
    }
    printf("the new data set is\n");
    temp=*head;
    while(temp!=0){
        printf(" %d",temp->data);
        temp=temp->next;
    }
}

void deletion(nod **head)
{
    int pos,i=1;nod *temp,*todelete;
    printf("enter the position you want to delete from\n");
    scanf("%d",&pos);
    temp=*head;
    if(pos<1){
        printf("inavlid choice\n");
    }
    else if(pos==1){
        *head=(*head)->next;
        free(temp);
    }
    else{
        while(i<pos-1){
            temp=temp->next;
            i++;
        }
        todelete=temp->next;
        temp->next=todelete->next;
        free(todelete);
    }
    printf("the new data set is\n");
    temp=*head;
    while(temp!=0){
        printf(" %d",temp->data);
        temp=temp->next;
    }
}

void reverse(nod **head)
{
    nod *nxtnode,*crnode,*prenode,*temp;
    prenode=0;
    crnode=nxtnode=*head;
    while(nxtnode!=0){
        nxtnode=nxtnode->next;
        crnode->next=prenode;
        prenode=crnode;
        crnode=nxtnode;
    }
    *head=prenode;
    printf("the new data set is\n");
    temp=*head;
    while(temp!=0){
        printf(" %d",temp->data);
        temp=temp->next;
    }
}    


int main() {
    nod *newnode,*temp,*head;int ch=1,c=1;
    head=0;
    while(ch){
        newnode=(nod*)malloc(sizeof(nod));
        printf("enter the data\n");
        scanf("%d",&newnode->data);
        newnode->next=0;
        if(head==0)
            head=temp=newnode;
        else{
            temp->next=newnode;
            temp=newnode;
        }
        printf("do you want to continue(0,1)\n");
        scanf("%d",&ch);
    }
    printf("the data set is\n");
    temp=head;
    while(temp!=0){
        printf(" %d",temp->data);
        temp=temp->next;
    }
    while(c){
        printf("\nchoose\n1.end\n2.insert\n3.delete\n4.reverse\n");
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
        printf("\nwant to perform more operation(0,1)\n");
        scanf("%d",&c);
    }
    printf("happy ending\n");
    return 0;
}
