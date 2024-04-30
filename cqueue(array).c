// Online C compiler to run C program online
#include <stdio.h>
#define n 10

int cqu[10],front=-1,rear=-1;

void enqueue()
{
    int data;
    printf("enter data\n");
    scanf("%d",&data);
    
    if((rear+1)%n == front)
        printf("overflow\n");
    else if(front==-1 && rear==-1){
        front=rear=0;
        cqu[rear]=data;
    }
    else{
        rear=(rear+1)%n;
        cqu[rear]=data;
    }
    
}

void display()
{
    int i;
    for(i=front;i!=(rear+1);i=(i+1)%n)
    {
        printf("%d ",cqu[i]);
    }
}

void dequeue()
{
    if(front==-1 || front > rear)
        printf("underflow\n");
    else{
        printf("%d ",cqu[front]);
        front=(front+1)%n;
    }
}

int main() 
{
    int ch=1,c=1;
    while(ch)
    {
        enqueue();
        printf("more enqueue?(1,0)\n");
        scanf("%d",&ch);
    }
    while(c)
    {
        printf("\nchoose-\n1.end\n2.display\n3.dequeue\n4.enqueue\n");
        scanf("%d",&ch);
        switch(ch)
        {
            case 1: printf("happy ending\n");
                    break;
            case 2: display();
                    break;
            case 3: dequeue();
                    break;
            case 4: enqueue();
                    break;
            default:printf("invalid choice\n");
        }
        printf("\nmore task?(1,0)\n");
        scanf("%d",&c);
    }
    return 0;
}