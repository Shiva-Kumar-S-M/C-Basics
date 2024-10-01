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