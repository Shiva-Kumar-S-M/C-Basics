#include<stdio.h>
#include<stdlib.h>

struct BST
{
    int data;
    struct BST *lchild;
    struct BST *rchild;

};

typedef struct BST NODE;

NODE *create();
void insert(NODE *root,NODE *newnode);
void preorder(NODE *root);
void inorder(NODE *root);
void postorder(NODE *root);
void search(NODE *root);

NODE *create()
{
    NODE *temp;
    temp=(NODE*)malloc(sizeof(NODE));
    printf("\n Enter the value");
    scanf("%d",&temp->data);
    temp->lchild=NULL;
    temp->rchild=NULL;
    return temp;
}

void insert(NODE *root,NODE *newnode)
{
    if(newnode->data < root->data)
    {
        if(root->lchild ==NULL)
        root->lchild=newnode;
        else
        insert(root->lchild,newnode);
    }

    if(newnode->data > root->data)
    {
        if(root->rchild==NULL)
        root->rchild=newnode;
        else
        insert(root->rchild,newnode);
    }
}

void search(NODE *root)
{
    int key;
    NODE *cur;
    if(root == NULL)
    {
        printf("\n BST is empty");
        return;
    }
    printf("\n Enter an element to be searched");
    scanf("%d",&key);
    cur=root;
    while(cur!=NULL)
    {
        if(cur->data==key)
        {
            printf("\n Key element present in BST");
            return;
        }
        if(key < cur->data )
        cur=cur->lchild;
        else
        cur=cur->rchild;
    }
    printf("\n Key element not found in BST");
}

void inorder(NODE *root)
{
    if(root!=NULL)
    {
        inorder(root->lchild);
        printf("%d",root->data);
        inorder(root->rchild);
    }
}

void preorder(NODE *root)
{
    if(root!=NULL)
    {
        printf("%d",root->data);
        preorder(root->lchild);
        preorder(root->rchild);
    }
}

void postorder(NODE *root)
{
    if(root!=NULL)
    {
        postorder(root->lchild);
        postorder(root->rchild);
        printf("%d",root->data);
    }
}

void main()
{
    int key,ch,i,n;
    NODE *root=NULL,*newnode;
    while(1)
    {
        printf("\n------BST MENU-------");
        printf("\n 1:Create a BST:");
        printf("\n 2:Traversal BST:");
        printf("\n 3:Search");
        printf("\n 4:Exit");
        printf("\n Enter your choice:");
        printf("%d",&ch);
        switch(ch)
        {
            case 1: printf("\n ENter number of elements");
            scanf("%d",&n);
            for(i=1;i<=n;i++)
            {
                newnode=create();
                if(root==NULL)
                root=newnode;
                else
                insert(root,newnode);
                
            }
            break;

            case 2: if(root==NULL)
            printf("\n Tree is not created");
            else
            {
                printf("\n The preorder display");
                preorder(root);
                printf("\n the inorder display");
                inorder(root);
                printf("\n The postorder display");
                postorder(root);
            }
            break;
            case 3:search(root);
            break;
            case 4:exit(0);
        }
    }
}