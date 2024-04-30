// Online C compiler to run C program online
#include <stdio.h>
#include <stdlib.h>
#define m 10

int queue[m],front=-1,rear=-1;

void enqueue(int data)
{
    if(rear==m-1)
        printf("overflow\n");
    else if(front==-1 && rear==-1){
        front=rear=0;
        queue[rear]=data;
    }
    else{
        rear++;
        queue[rear]=data;
    }
}

void insert()
{
    int data,pos,i;
    printf("enter pos to insert\n");
    scanf("%d",&pos);
    printf("enter data to insert\n");
    scanf("%d",&data);
    if(pos==rear+2)
        enqueue(data);
    else if(pos<1)
        printf("invaid pos\n");
    else{
        int c=rear;
        for(i=rear;i>=pos-1;i--)
        {
            queue[c+1]=queue[c];
            c--;
        }
        queue[pos-1]=data;
        rear++;
    }
    printf("the new data set is\n");
    for(i=front;i<=rear;i++)
    {
        printf("%d ",queue[i]);
    }
}

void dequeue()
{
    if(front==-1 && rear==-1)
        printf("underflow\n");
    else if(front>rear)
        printf("no more elements\n");
    else{
        printf("%d",queue[front]);
        front++;
    }
}

void deletion()
{
    int pos,i;
    printf("enter the position to delete\n");
    scanf("%d",&pos);
    for(i=pos-1;i<rear;i++)
    {
        queue[i]=queue[i+1];
    }
    rear--;
    printf("the new data set is\n");
    for(i=front;i<=rear;i++)
    {
        printf("%d ",queue[i]);
    }
}

int main() 
{
    int ch=1,data,i,c=1;
    while(ch)
    {
        printf("enter the data to insert\n");
        scanf("%d",&data);
        enqueue(data);
        printf("more inputs?(1,0)\n");
        scanf("%d",&ch);
    }
    printf("the data set is\n");
    for(i=front;i<=rear;i++)
    {
        printf("%d ",queue[i]);
    }
    while(c)
    {
        printf("\nchoose\n1.end\n2.insert\n3.delete\n4.dequeue\n");
        scanf("%d",&ch);
        switch(ch)
        {
            case 1: printf("happy ending\n");
                    break;
            case 2: insert();
                    break;
            case 3: deletion();
                    break;
            case 4: dequeue();
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