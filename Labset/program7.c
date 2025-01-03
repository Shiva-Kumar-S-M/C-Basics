#include<stdio.h>
#include<stdlib.h>

struct node
{
    char usn[25],name[25],branch[25];
    int sem;
    long int phone;
    struct node *link;
};

typedef struct node NODE;

NODE *start = NULL;
int count =0;


NODE *create()
{
    NODE *snode;
    snode=(NODE *)malloc(sizeof(NODE));

    if(snode==NULL)
    {
        printf("\n Memory is not avaialable");
        exit(1);
    }
    printf("\n Enter usn , name, branch,sem phone Number");
    scanf("%s%s%s%d%ld",snode->usn,snode->name,snode->branch,&snode->sem,&snode->phone);
    snode->link=NULL;
    count ++;
    return snode;
}
NODE *insertfront()
{
    NODE *temp;
    temp=create();
    if(start ==NULL)
    {
        return temp;
    }
    temp->link=start;
    return temp;
}

NODE *deletefront()
{
    NODE *temp;
    if(start==NULL)
    {
        printf("\n Linked list is empty");
        return NULL;
    }
    if(start->link==NULL)
    {
        printf("\n The Student ndoe with usn :%s is deleted",start->usn);
        count--;
        free(start);
        return NULL;
    }
    temp=start;
    start=start->link;
    printf("\n The student node with usn :%s is deleted",temp->usn);
    count--;
    free(temp);
    return start;
}

NODE *insertend()
{
    NODE *cur,*temp;
    temp=create();
    if(start==NULL)
    {
        return temp;
    }
    cur=start;
    while(cur->link !=NULL)
    {
        cur=cur->link;
    }
    cur->link=temp;
    return start;
}

NODE *deleteend()
{
    NODE *cur,*prev;
    if(start==NULL)
    {
        printf("\n Linked list is empty");
        return NULL;
    }
    if(start->link==NULL)
    {
        printf("\n The student node with usn :%s is deleted",start->usn);
        free(start);
        count--;
        return NULL;
    }
    prev=NULL;
    cur=start;
    while(cur->link==NULL)
    {
        prev=cur;
        cur=cur->link;
    }
    printf("\n The student node with usn:%s is deleted",cur->usn);
    free(cur);
    prev->link=NULL;
    count--;
    return start;
}


void display()
{
    NODE *cur;
    int num=0;
    if(start==NULL)
    {
        printf("\n No contents in SLL:\n");
        return;
    }
    printf("\n The contents of SLL:\n");
    cur=start;
    while(cur!=NULL)
    {

    printf("|%d| |USN:%s| |Name:%s| |Branch:%s| |Sem:%d| |Phone:%ld|",num,cur->usn,cur->name,cur->branch,cur->sem,cur->phone );
    cur=cur->link;
    num++;
    }
    printf("\n No of student Nodes is %d",count);

}


void stackdemo()
{
    int ch;
    while(1)
    {
        printf("\n ------Stack Demo using SLL------\n");
        printf("\n1:Push Operation \n2:Pop Operation \n3:Display \4:Exit \n");
        printf("\n Enter your choice for Stack demo");
        scanf("%d",&ch);

        switch(ch)
        {
            case 1: start=insertfront();
            break;
            case 2: start=deletefront();
            break;
            case 3:display();
            break;
            default:return;
        }
    }
    return;
}

void main()
{
    int ch, i,n;
    while(1)
    {
        printf("-----Menu--------");
        printf("\n Enter your choice for Sll operation \n");
        printf("\n1:Create a SLL of student Nodes");
        printf("\n2:Display Status");
        printf("\n3:Insert at End");
        printf("\n4:Delete at End");
        printf("\n5:Stack demo using SLL(Insertion and deletion at end)");
        printf("\n6:Exit");
        printf("\n Enter your choice:");
        scanf("%d",&ch);

        switch(ch)
        {
            case 1: printf("\n Enter Number of students");
            scanf("%d",&n);
            for(i=1;i<=n;i++)
            start=insertfront();
            break;
            case 2:display();
            break;
            case 3: start=insertend();
            break;
            case 4:start=deleteend();
            break;
            case 5: stackdemo();
            break;
            case 6:exit(0);
            default:printf("enter valid choice");
        }
    }

}