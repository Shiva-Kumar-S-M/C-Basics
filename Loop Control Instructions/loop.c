// --------------For Loop------------------


// #include<stdio.h>
// int main(){
//     for(int i = 1; i<=100;i++){
//         printf("%d \n", i);
//     }
// }

// #include<stdio.h>
// int main(){
//     for(int i = 0 ; i <=10 ; i++){
//         printf("%d \n", i);
//     }
// }


// #include<stdio.h>
// int main(){      // Post Increment
//     int i = 1;
//     printf("%d \n" , i++);
//     printf("%d", i);
// }
// #include<stdio.h>
// int main(){      // Pre Increment
//     int i = 1;
//     printf("%d \n" , ++i);
//     printf("%d", i);
// }

// #include<stdio.h>
// int main(){
//     for (float i = 1.00 ; i<=5.00;i++ ){
//         printf("%f \n" , i);
//     }
// }
// #include<stdio.h>
// int main(){
//     for (char ch = 'a' ; ch <='z' ; ch++){
//         printf("%c \n" , ch);
//     }
// }

//----------------------- While loop --------------
// #include<stdio.h>
// int main(){
//     int i = 1;
//     while(i<=10){
//         printf("%d \n",i);
//         i++;
//     }
// }
 

// #include<stdio.h>
// int main(){
//     int n;
//     printf("Enter a number:");
//     scanf("%d \n",&n);
//     // int i=1;

//     // while(i<=n){
//     //     printf("%d \n",i);
//     //     i++;
//     // }
//     for ( int i = 0; i<=n ; i++){
//         printf("%d \n", i);
//     }
// }

// // --------Do while ------------
// #include<stdio.h>
// int main (){
//     int i = 1;
//     do{
//         printf("%d \n", i);
//         i++;
//     } while(i <= 12);
// }

// // WAP to sum of Natrural Numbers
// #include<stdio.h>
// int main(){
//     int n;
//     printf("Enter a number:");
//     scanf("%d " , &n);
//     int sum =0;
//     // for(int i=1 , j=n;i<n && j>=1;i++,j--)
//     for(int j=n; j>=1;j--){
//         sum = sum +j;
//         printf("%d \n" , j);
        
//     }
//     printf("Sum of Number is : %d \n ",sum);
// }

// //WAP to calculate table of number 
// #include<stdio.h>
// int main(){
//     int n;
//     printf("Enter A Numbere:");
//     scanf("%d ",&n);
//     // int i = 1;
//     // int table;
//     // while(i<=10){
//     //     table = n*i;
//     //     printf("%d \n" , table);
//     //     i++;

//     // }
//     for(int i = 1 ; i<=10 ; i++){                          // Simple method
//         printf("%d \n" , n*i);
//     } 

// }

//-- break Statements --
// #include<stdio.h>
// int main(){
//     for(int i=1;i<=5;i++){
//         if(i == 3)
//         break;
//         else{
//             printf("%d \n",i);
//         }
//     }
//     printf("End");
    
// }

// #include<stdio.h>
// int main(){
//     int n;
//     printf("Enter a number");
//     scanf("%d",&n);

//     for(int i=1;i<=n;i++){
//         if(i%2==0){
//             break;
//         }
//         else {
//             printf("%d" , i);
//         }
//     }
//     printf("You have entered odd number");
// }

// take input from user until user enter a odd number
// #include<stdio.h>
// int main(){
//     int n;
//     do{
//         printf("Enter a number:");
//         scanf("%d",&n);
//         printf("%d \n",n);

//         if(n%2 !=0)
//         break;

//     }while(1);
//     printf("You  have entered an odd number");

// // }

// // take input from user until he enters a multiple of 7
// #include<stdio.h>
// int main(){
//     int n;
//     do{
//         printf("Enter a number:");
//         scanf("%d",&n);
//         printf("%d \n",n);

//         if(n%7 ==0)
//         break;

//     }while(1);
//     printf("You  have entered an multiple of 7");

// }

//---------------Continue Statements-------------
// #include<stdio.h>
//  int main(){
//     for(int i=1;i<=5;i++){
//         if(i ==3)
//         continue;
//         printf("%d\n",i);
//     }
//  }

// WAP To print from 0-10 execept 6
// #include<stdio.h>
//  int main(){
//     for(int i=0;i<=10;i++){
//         if(i==6)
//         continue;
//         printf("%d\n",i);
//     }
//  }


// print all odd numbers from 5 to 50
// #include<stdio.h>
//  int main(){
//     for(int i=5;i<=50;i++){
//         if(i %2 ==0)
//         continue;
//         printf("%d\n",i);
//     }
//  }

// WAP to calculate factorial of n
// #include<stdio.h>
// int main(){
//     int n;
//     printf("Enter a number to calculate Factorial:");
//     scanf("%d",&n);
//     int fact =1;
//     for(int i=1;i<=n;i++){
//         fact=fact*i;

//     }
//             printf("Factorial of Number is:%d",fact);

// }

//WAP to print reverse of the table number n
// #include<stdio.h>
// int main(){
//     int n;
//     printf("Enter a number:");
//     scanf("%d",&n);
//     for(int i=10;i>=1;i--){
//         printf("%d \n",n*i);
//     }
// }

//WAP to calculate sum of number from 5 to 50
// #include<stdio.h>
// int main(){
//     int sum=0;
//     for(int i=5;i<=50;i++){
//         sum=sum+i;

//     }
//     printf("Sum of number is:%d",sum);
// }
