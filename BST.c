#include <stdio.h>
#include <stdlib.h>

struct node{
    int data;
    struct node *left,*right;
};

struct node *createnode(int data)
{
    struct node *newnode;
    newnode = (struct node*)malloc(sizeof(struct node));
    newnode->data=data;
    newnode->left=newnode->right=NULL;
    return newnode;
}

struct node *insert(struct node *root,int data)
{
    if(root==NULL)
    {
        return createnode(data);
    }
    else if(data > root->data)
    {
        root->right= insert(root->right,data);
    }
    else if(data < root->data)
    {
        root->left= insert(root->left,data);
    }
    return root;
}

int findmin(struct node *node)
{
    struct node *temp;
    temp=node;
    while(temp->left!=NULL)
    {
        temp=temp->left;
    }
    return temp->data;
}

struct node *deletion(struct node *root,int data)
{
    struct node *temp;
    if(root==NULL)
        return root;
    if(data < root->data)
        root->left=deletion(root->left,data);
    else if(data > root->data)
        root->right=deletion(root->right,data);
    else{
        if(root->left==NULL)
        {
            temp=root->right;
            free(root);
            return temp;
        }
        else if(root->right==NULL)
        {
            temp=root->left;
            free(root);
            return temp;
        }
        
        temp=findmin(root->right);
        root->data=temp->data;
        root->right=deletion(root->right,temp->data);
    }
    return root;
}

void inorder(struct node *root)
{
    if(root!=NULL)
    {
        inorder(root->left);
        printf("%d ",root->data);
        inorder(root->right);
    }
}

void preorder(struct node *root)
{
    if(root!=NULL)
    {
        printf("%d ",root->data);
        preorder(root->left);
        preorder(root->right);
    }
}

void postorder(struct node *root)
{
    if(root!=NULL)
    {
        postorder(root->left);
        postorder(root->right);
        printf("%d ",root->data);
    }
}

int main() 
{
    struct node *root;
    int n,data,ch,choice=1;
    printf("enter the number of insertions to be made\n");
    scanf("%d",&n);
    printf("enter the values\n");
    for(int i=0;i<n;i++)
    {
        printf("enter %dth data ",i);
        scanf("%d",&data);
        root=insert(root,data);
    }
    while(choice==1){
        printf("enter task to perform\n");
        printf("1.insertion\n2.inorder\n3.preorder\n4.postorder\n5.deletion\n6.findmin\n7.exit\n");
        scanf("%d",&ch);
        switch(ch)
        {
            case 1:printf("enter data to insert\n");
                   scanf("%d",&data);
                   root=insert(root,data);
                   break;
            case 2:printf("inorder:\n");
                   inorder(root);
                   printf("\n");
                   break;
            case 3:printf("preorder:\n");
                   preorder(root);
                   printf("\n");
                   break;
            case 4:printf("postorder:\n");
                   postorder(root);
                   printf("\n");
                   break;
            case 5:printf("enter data to delete\n");
                   scanf("%d",&data);
                   root=deletion(root,data);
                   break;
            case 6:data=findmin(root);
                   printf("minimum element is ",data);
                   break;
            case 7:printf("end of program\n");
                   break;
            default:printf("invalid choice\n");       
        }
        printf("do you want to perform task again(0,1)\n");
        scanf("%d",&choice);
    }
    printf("happy ending\n");
    return 0;
}