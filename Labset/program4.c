// Design, Develop and Implement a Program in C for converting an Infix Expression to Postfix Expression.
// Program should support for both parenthesized and free parenthesized expressions with the operators: +, -,
// *, /, %(Remainder), ^(Power) and alphanumeric operands.
// ABOUT THE EXPERIMENT:
// Infix: Operators are written in-between their operands. Ex: X + Y
// Prefix: Operators are written before their operands. Ex: +X Y
// Postfix: Operators are written after their operands. Ex: XY+
// Examples of Infix, Prefix, and Postfix
// Infix Expression
// Prefix Expression
// Postfix Expression
// A+ B
// +AB
// AB +
// A+ B* C
// +A* BC
// ABC * +
// Infix to prefix conversion
// Expression = (A+B^C)*D+E^5
// Step 1. Reverse the infix expression.
// 5^E+D*)C^B+A(
// Step 2. Make Every '(' as ')' and every ')' as '('
// 5^E+D*(C^B+A)
// Step 3. Convert expression to postfix form. A+(B*C-(D/E-F)*G)*H
// Expression
// Stack
// 5^E+D*(C^B+A)
// Empty
// ^E+D*(C^B+A)
// Empty
// E+D*(C^B+A)
// ^
// +D*(C^B+A)
// ^
// D*(C^B+A)
// +
// *(C^B+A)
// +
// (C^B+A)
// +*
// C^B+A)
// +*(
// ^B+A)
// +*(
// B+A)
// +*(^
// +A)
// +*(^
// A)
// +*(+
// )
// +*(+
// End
// +*
// End
// Empty
// Step 4. Reverse the expression.
// +*+A^BCD^E
// Step 5. Result
// +*+A^BCD^E5
// Output
// -
// 5
// 5
// 5E
// 5E^
// 5E^D
// 5E^D
// 5E^D
// 5E^DC
// 5E^DC
// 5E^DCB
// 5E^DCB^
// 5E^DCB^A
// 5E^DCB^A+
// 5E^DCB^A+*+
// Comment
// Initial
// Print
// Push
// Push
// Pop And Push
// Print
// Push
// Push
// Print
// Push
// Print
// Pop And Push
// Print
// Pop Until '('
// Pop Every element#include<stdio.h>
#include<string.h>
int F(char symbol)
{
switch (symbol)
{
case '+':
case '-':return 2;
case '*':
case '/':
case '%':return 4;
case '^':
case '$':return 5;
case '(':return 0;
case '#':return -1;
default :return 8;
}
}
int G(char symbol)
{
switch (symbol)
{
case '+':
case '-':return 1;
case '*':
case '/':
case '%':return 3;
case '^':
case '$':return 6;
case '(':return 3;
case ')':return 0;
default :return 7;
}
}
void infix_postfix(char infix[], char postfix[])
{
int top=-1, j=0, i;
char s[30], symbol;
s[++top] = '#';
for(i=0; i < strlen(infix); i++)
{
symbol = infix[i];
while (F(s[top]) > G(symbol))
{
postfix[j] = s[top--];
j++;
}
if(F(s[top]) != G(symbol))
s[++top] = symbol;
else
top--;
}while(s[top] != '#')
postfix[j++] = s[top--];
postfix[j] = '\0';
}
void main()
{
char infix[20], postfix[20];
printf("\nEnter a valid infix expression\n") ;
scanf ("%s", infix) ;
infix_postfix (infix, postfix);
printf("\nThe infix expression is:\n");
printf ("%s",infix);
printf("\nThe postfix expression is:\n");
printf ("%s",postfix) ;
}