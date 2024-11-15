#include<stdio.h>
#include<stdlib.h>
#define max 5

int q[max],f=-1,r=-1;
void insert()
{
    if(f==(r+1)%max)
        printf("\n Queue is overflow");
    else
    {
        if(f==-1)
        f++;
        r=(r+1)%max;
        printf("\n Enter an element to be pushed:");
        scanf("%d",&q[r]);
    }
    
}

void delete()
{
    
    if(f==-1)
    printf("\nQueue is underflow");
    else
    {
        
        printf("Element deleted is:%d",q[f]);
        if(f==r)
        f=r=-1;
        else
        f=(f+1)%max;

    }
}

void display()
{
    if(f==-1)
    printf("\n Queue Elements are empty");
    else
    {
        int i;
        printf("\n Queue elements are:\n");
        for(i=f;i!=r;i=(i+1)%max)
        printf("%d\t",q[i]);
        printf("%d",q[i]);
        printf("\n Front is at:%d Rear is at :%d",q[f],q[r]);
    }
}
int main()
{
    printf("\n MENU");
    printf("\n1.Insert");
    printf("\n2.Delete");
    printf("\n3.Display");
    printf("\n4.Exit");
    int ch;
    do {
        printf("\n Enter your choice:\n");
        scanf("%d",&ch);
        switch(ch)
        {
            case 1:insert();
            break;
            case 2:delete();
            break;
            case 3:display();
            break;
            case 4:exit(0);
            default:printf("enter valid choices");
        }

    }while(1);
    return 0;
}