// if-else syntax
// if(Condition){
//     Do something if true
// }
// else {
//     do something if false
// }


// #include<stdio.h>
// int main(){
//     int age;
//     printf("Enter your age: ");
//     scanf("%d",&age);

//     if(age>18){
//         printf("Adult");
//     }
//     else{
//         printf("You are not Adult");
//     }
// }

// #include<stdio.h>
// int main(){
//     int age;
//     printf("Enter yout age:");
//     scanf("%d",&age);


//     if(age>=18){
//         printf("Adult \n");
//     }
//     else if(age>13 && age<18){
//         printf("Teenager \n");
//     }
//     else{
//         printf("Child");
//     }
// }

// #include<stdio.h>
// int main(){
//     int age;
//     printf("Enter yout age:");
//     scanf("%d",&age);

//     age >=18 ? printf("Adult \n") : printf("not adult");
// }

// // Switch statements
// #include<stdio.h>
// int main(){
//     int day;          // char
//     printf("Enter a Day(1-7):");        // 'a'  or 'A'

//     scanf("%d",&day);

//     switch (day){
//         case 1:printf("Monday \n");
//                break;
//         case 2:printf("Tuesday \n");
//                break;
//         case 3:printf("Wednesday \n");
//                break;
//         case 4:printf("Thursday \n");
//                break;
//         case 5:printf("Friday \n");
//                break;
//         case 6:printf("Saturday \n");
//                break;
//         case 7:printf("Sunday \n");
//                break;
//         default:printf("Not a valid Day!");
               
//     }
// }


// Nested elements 
// #include<stdio.h>
// int main(){
//     int num;
//     printf("Enter a number :");
//     scanf("%d",&num);

//     if(num >= 0){
//         printf("positive \n");
//         if(num % 2 == 0){
//             printf("Even \n");
//         }
//         else{
//             printf("Odd \n");
//         }

//     }
//     else{
//         printf("Negative");
//     }
// }

// WAP to check wether a student is passed  or not?

// #include<stdio.h>
// int main(){
//     int marks;
//     printf("Enter Marks :");
//     scanf("%d",&marks);

//     // if (marks > 30 && marks<=100){
//     //     printf("Student is passed \n");
//     // }
//     // else if (marks<=30 && marks>=0){
//     //     printf("Student is failed \n");
//     //         }
//     //         else {
//     //             printf("Not appeared");
//     //         }
//     marks > 30 && marks <=100 ? printf("Student is Passed"): printf("Student is failed");
// }


// WAP to give grades to student
// #include<stdio.h>
// int main(){
//     int marks;
//     printf("Enter Marks :");
//     scanf("%d",&marks);
//     if(marks >30 && marks <70){
//         printf("Grade is B \n");
//     }
//     else if( marks >70 && marks <=90){
//         printf("Grades is A \n");
//     }
//     else if(marks > 90 && marks <=100){
//         printf("Grades is A++");
//     }
//     else{
//         printf("Grades is c");
//     }
// }

// #include<stdio.h>
// int main()
// {
//     int x = 2;
//     if(x = 1){
//         printf("x is equal to one ");
//     }
//     else{
//         printf("x is not equal to one");
// }
// }

// WAP to check whether a given number is uppercase or not
#include<stdio.h>
int main ()
{
    char ch;
    printf("Enter a character:");
    scanf("%c",&ch);

    if( ch >= 'A' && ch <= 'Z'){
        printf("Character is uppercase");
    }
    else if (ch >='a' && ch <='z'){
        printf("Character is Lowercase");
    }
    else {
        printf("Other than aplhabets");
    }
}
