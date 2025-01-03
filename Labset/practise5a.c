// #include<stdio.h>
// #include<stdlib.h>
// #include<math.h>
// #include<ctype.h>
// int i,top=-1;
// int op1,op2,res,s[20];
// char postfix[90],symb;

// void push(int item)

// {
//     top=top+1;
//     s[top]=item;
// }

// int pop()
// {
//     int item;
//     item=s[top];
//     top=top-1;
//     return item;
// }

// void main()
// {
//     printf("\n Enter a valid postfix expression");
//     scanf("%s",postfix);
//     for(i=0;postfix[i]!='\0';i++)
//     {
//         symb=postfix[i];
//         if(isdigit(symb))
//         {
//             push(symb - '0');
//         }
//         else
//         {
//             op2=pop();
//             op1=pop();
//             switch(symb)
//             {
//                 case '+':push(op1+op2);
//                 break;
//                 case '-':push(op1-op2);
//                 break;
//                 case '*':push(op1*op2);
//                 break;
//                 case '/':push(op1/op2);
//                 break;
//                 case '%':push(op1%op2);
//                 break;
//                 case '$':
//                 case '^':push(pow(op1,op2));
//                 break;
//                 default:push(0);
//             }
//         }

//     }
//     res=pop();
//     printf("Result is :%d",res);
// }

#include<stdio.h>
#include<math.h>
void tower(int n,int source,int temp,int destination)
{
    if(n==0)
    return;
    tower(n-1,source,destination,temp);
    printf("\n Move disk %d from %c to %c",n,source,destination);
    tower(n-1,temp,source,destination);
}
void main()
{
    int n;
    printf("\n Enter the number of discs:");
    scanf("%d",&n);
    tower(n,'A','B','C');
    printf("\n\n Total number of moves are:%d",(int) pow(2,n)-1);
}
