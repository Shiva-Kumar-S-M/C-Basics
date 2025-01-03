#include<stdio.h>
#include<stdlib.h>

struct node
{
    char ssn[25],name[25],dept[25],designation[25];
    int sal;
    long int phone;
    struct node *llink;
    struct node *rlink;
};

typedef struct node NODE;

NODE *first=NULL;
int count=0;

NODE *create()
{
    NODE *newnode;
    newnode=(NODE *)malloc(sizeof(NODE));
    if(newnode==NULL)
    {
        printf("\n Running out of memory");
        exit(0);
    }
    printf("\n ENter ssn , name,dept,designation,salary,phone number");
    scanf("%s%s%s%s%d%ld",newnode->ssn,newnode->name,newnode->dept,newnode->designation,&newnode->sal,&newnode->phone);
    newnode->llink=NULL;
    newnode->rlink=NULL;
    count++;
    return newnode;
}

NODE *insertfront()
{
    NODE *temp;
    temp=create();
    if(first=NULL)
    {
        return temp;
    }
    temp->rlink=first;
    first->llink=temp;
    return temp;
}

void display()
{
    NODE *cur;
    int nodeno=1;
    cur=first;
    if(cur==NULL)
    printf("\nNo contents to display");
    while(cur!=NULL)
    {
        printf("\n |Newnode:%d| |SSN:%s| | Name:%s | | Departement:%s| |Designation:%s| | Salary:%d | | Phone:%ld |",nodeno,cur->ssn,cur->name,cur->dept,cur->designation,cur->sal,cur->phone);
        cur=cur->rlink;
        nodeno++;
    }
    printf("\n Number of employee nodes %d",count);
}

NODE *deletefront()
{
    NODE *temp;
    if(first==NULL)
    {
        printf("\n Doubly linked list is empty");
        return NULL;
    }
    if(first->rlink==NULL)
    {
        printf("\n The Employee node with ssn :%s is deleted",first->ssn);
        free(first);
        count--;
        return NULL;
    }
    temp=first;
    first=first->rlink;
    temp->rlink=NULL;
    first->llink=NULL;
    printf("\n The employee node with ssn:%s is deleted",temp->ssn);
    free(temp);
    count--;
    return first;
}

NODE *insertend()
{
    NODE *cur,*temp;
    temp=create();
    if(first==NULL)
    {
        return temp;
    }
    cur=first;
    while(cur->rlink!=NULL)
    {
        cur=cur->rlink;
    }
    cur->rlink=temp;
    temp->llink=cur;
    return first;
}

NODE *deleteend()
{
    NODE *prev,*cur;
    if(first == NULL)
    {
        printf("\nDoubly linked list is empty");
        return NULL;
    }
    if(first->rlink ==NULL)
    {
        printf("\n The employee node with ssn:%s is deleted",first->ssn);
        free(first);
        count--;
        return NULL;
    }
    prev=NULL;
    cur=first;
    while(cur->rlink!=NULL)
    {
        prev=cur;
        cur=cur->rlink;
    }
    cur->llink=NULL;
    printf("\n The employee node with ssn:%s is deleted",cur->ssn);
    free(cur);
    prev->rlink=NULL;
    count--;
    return first;

}

void deqdemo()
{
    int ch;
    while(1)
    {
        printf("\n Demo Double ended queue operation");
        printf("\n 1:Insertqueuefront \n2:deletequeuefront \n3:inserqueueend \n4:Delete queue end \n5:diaplay \n6:exit\n");
        printf("\n Enter your choice for double ended queue");
        scanf("%d",&ch);
        switch(ch)
        {
            case 1: first=insertfront();
            break;
            case 2: first=deletefront();
            break;
            case 3: first=insertend();
            break;
            case 4: first=deleteend();
            break;
            case 5: display();
            break;
            default:return;
        }

    }
}

void main()
{
    int ch,i,n;
    while(1)
    {
        printf("-----Menu------");
        printf("\n 1: create a dll for employee node");
        printf("\n 2:Display status");
        printf("\n 3:Insertend");
        printf("\n 4:Deleteend");
        printf("\n 5:Insertfront");
        printf("\n 6:Deletefront");
        printf("\n 7:Double ended queue opertaion ");
        printf("\n 8:exit");
        printf("\n Enter your choice ");
        scanf("%d",&ch);
        switch(ch)
        {
            case 1:printf("\n Enter Number of employee nodes");
            scanf("%d",&n);
            for(i=1;i<=n;i++)
            first=insertend();
            break;
            case 2:display();
            break;
            case 3: first=insertend();
            break;
            case 4:first=deleteend();
            break;
            case 5: first=insertfront();
            break;
            case 6: first=deletefront();
            break;
            case 7:deqdemo();
            break;
            case 8: exit(0);
            default: printf("\n ENter a valid choice");
        }
    }
}