#include<stdio.h>
#include<stdlib.h>

#define MAX 4

int s[MAX];
int top=-1;

void push(int item);
int pop();
void palindrome();
void display();

void main()
{
    int choice,item;
    while(1)
    {
        printf("\n -------MENU------------");
        printf("\n 1:Push an element to stack and overflow demo");
        printf("\n 2:Pop an element from stack and underflow demo");
        printf("\n 3:Palindrome");
        printf("\n 4:Display");
        printf("\n 5:Exit");
        printf("\n Enter your choice:");
        scanf("%d",&choice);
        switch(choice)
        {
            case 1:printf("\n ENter an element to be pushed:");
            scanf("%d",&item);
            push(item);
            break;

            case 2:item=pop();
            if(item !=-1)
            printf("\n Element popped is %d",item);
            break;
            
            case 3:palindrome();
            break;

            case 4: display();
            break;

            case 5: exit(1);
            default:printf("\n Enter a valid choices");
            break;
        }
    }
}

void push(int item)
{
    if(top == MAX-1)
    {
        printf("\n------stack overflow------");
        return;
    }
    top=top+1;
    s[top]=item;
}

int pop()
{
    int item;
    if(top==-1)
    {
        printf("\n ---stack underflow-----");
        return -1;
    }

    item=s[top];
    top=top-1;
    return item;
}

void display()
{
    int i;
    if(top==-1)
    {
        printf("\n Stack element is empty");
        return;
    }
    printf("\n Stack elements are:");
    for(i=top;i>=0;i--)
    printf(" | %d |\n",s[i]);
}

void palindrome()
{
    int flag=1,i;
    printf("\n stack contents are");
    for(i=top;i>=0;i--)
    printf(" | %d|\n",s[i]);

    printf("\n Reverse of stack contents are");
    for(i=0;i<=top;i++)
    printf("| %d |\n",s[i]);

    for(i=0;i<=top/2;i++)
    {
        if(s[i]!=s[top-i])
        {
            flag=0;
            break;
        }
    }
    if(flag==1)
    {
        printf("\n Its a palindrome number");
    }
    else
    {
        printf("\n Its not a palindrome number");
    }
}