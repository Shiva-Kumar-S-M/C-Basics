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

#include<stdio.h>
int main(){
    int age;
    printf("Enter yout age:");
    scanf("%d",&age);

    age >=18 ? printf("Adult \n") : printf("not adult");
}