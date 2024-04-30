// Online C compiler to run C program online
#include <stdio.h>
#include <stdlib.h>

typedef struct node{
    int coeff,expo;
    struct node *next;
}nod;

nod *head1=NULL,*head2=NULL,*head3=NULL;

void createpol1()
{
    nod *temp,*newnode;
    newnode=(nod*)malloc(sizeof(nod));
    printf("enter the expo\n");
    scanf("%d",&newnode->expo);
    printf("enter the coeff\n");
    scanf("%d",&newnode->coeff);
    newnode->next=NULL;
    if(head1==NULL)
        head1=temp=newnode;
    else{
        temp->next=newnode;
        temp=temp->next;
    }
}

void createpol2()
{
    nod *temp,*newnode;
    newnode=(nod*)malloc(sizeof(nod));
    printf("enter the expo\n");
    scanf("%d",&newnode->expo);
    printf("enter the coeff\n");
    scanf("%d",&newnode->coeff);
    newnode->next=NULL;
    if(head2==NULL)
        head2=temp=newnode;
    else{
        temp->next=newnode;
        temp=temp->next;
    }
}

void createpol3(int expo,int coeff)
{
    nod *temp,*newnode;
    newnode=(nod*)malloc(sizeof(nod));
    newnode->expo=expo;
    newnode->coeff=coeff;
    newnode->next=NULL;
    if(head3==NULL)
        head3=temp=newnode;
    else{
        temp->next=newnode;
        temp=temp->next;
    }
}

void display()
{
    nod *temp;
    temp=head1;
    printf("poly1 is\n");
    while(temp!=NULL)
    {
        printf(" %dx(%d) +",temp->coeff,temp->expo);
        temp=temp->next;
    }
    printf(" 0");
    temp=head2;
    printf("\npoly2 is\n");
    while(temp!=NULL)
    {
        printf(" %dx(%d) +",temp->coeff,temp->expo);
        temp=temp->next;
    }
    printf(" 0");
}

void addpoly()
{
    nod *temp1,*temp2,*temp3=NULL;
    temp1=head1;
    temp2=head2;
    while(temp1!=NULL && temp2!=NULL)
    {
        if(temp1->expo > temp2->expo){
            createpol3(temp1->expo,temp1->coeff);
            temp1=temp1->next;
        }
        else if(temp2->expo > temp1->expo){
            createpol3(temp2->expo,temp2->coeff);
            temp2=temp2->next;
        }
        else{
            createpol3(temp1->expo,(temp2->coeff + temp1->coeff));
            temp1=temp1->next;
            temp2=temp2->next;
        }
    }
    while(temp1!=NULL)
    {
        createpol3(temp1->expo,temp1->coeff);
        temp1=temp1->next;
    }
    while(temp2!=NULL)
    {
        createpol3(temp2->expo,temp2->coeff);
        temp2=temp2->next;
    }
}

void result()
{
    nod *temp;
    temp=head3;
    printf("\nresult is\n");
    while(temp!=NULL)
    {
        printf(" %dx(%d) +",temp->coeff,temp->expo);
        temp=temp->next;
    }
    printf(" 0");
}

int main() 
{
    int n,i=0;
    printf("enter the no. of terms in pol1\n");
    scanf("%d",&n);
    while(i<n)
    {
        createpol1();
        i++;
    }
    i=0;
    printf("enter the no. of terms in pol2\n");
    scanf("%d",&n);
    while(i<n)
    {
        createpol2();
        i++;
    }
    display();
    addpoly();
    result();
    return 0;
}