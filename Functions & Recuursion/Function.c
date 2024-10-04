// Function Syntax
// #include<stdio.h>
// void printHello(); //function declaration --prototype

// int main(){
//     printHello();         //function call 
//     return 0;
// }

// //function Defination
// void printHello(){
//     printf("Hello World");
// }

// #include<stdio.h>
//  void printHello();
//  void printBye();

//  int main(){
//     printHello();
//     printBye();
//     return 0;
//  }

//  void printHello(){
//     printf("Hello! \n");
//  }
//  void printBye(){
//     printf("Bye!");
//  }

// WAP to print namaste if the user is indian And bonjour if  the user is french
// #include<stdio.h>
// void namste();
// void  bonjour();

// int main(){
//     printf("Enter i for indian & f for french:");
//     char ch;
//     scanf("%c",&ch);

//     if(ch =='i'){
//         namste();
//     }
//     else{
//         bonjour();
//     }
// }

// void namste(){
//     printf("Namaste");
// }
// void bonjour(){
//     printf("Bonjour");
// }

// WAP to  print the sum of two numbers using function
// #include<stdio.h>

// int sum(int a,int b);

// int main(){
//     int a , b;
//     printf("Enter First Number:");
//     scanf("%d",&a);
//     printf("Enter Second Number:");
//     scanf("%d",&b);
//     int res = sum(a,b);
//     printf("Sum of Two Numbers is %d:",res);

// }

// int sum(int a,int b){
//    return a+b;
// }

//WAP to print table using function
// #include<stdio.h>
// void printTable(int n);

// int main(){
//     int n;
//     printf("Enter A Numebr:");
//     scanf("%d",&n);
//     printTable(n);        //arguments or Actual Parameter
//     return 0;
// }
// void printTable(int n){       //parameter or Formal parameter
//     for(int i=1;i<=10;i++)
//     printf("%d \n",n*i);
// }


// #include<stdio.h>

// void calculatePrice(float value);

// int main(){
//     float value = 100.0;
//     calculatePrice(value);
//     return 0;

// }

// void calculatePrice(float value){
//     value = value +(0.18 * 100.0);
//     printf("Value after GST is:%f",value);

// }

// using library function calulate sqaure of given number
// #include<stdio.h>
// #include<math.h>

// float Sqaure(float n);

// int main(){
//     int n;
//     printf("Enter a number:");
//     scanf("%f",&n);
//     Square(n);
//     return 0;


// }

// float Square(float n){
//     printf("The Square of Number is :%f",pow(n,2));
// }
// WAP to calculate area of square,circle,rectangle

// #include<stdio.h>

// float square(float side);
// float circle(float r);
// float rectangle(float l,float b);

// int main(){
//     float side , r, l,b;
//     printf("Enter side:");
//     scanf("%f",&side);
//     printf("Enter r value:");
//     scanf("%f",&r);
//     printf("Enter l&b:");
//     scanf("%f%f",&l,&b);

//     square(side);
//     circle(r);
//     rectangle(l,b);
//     return 0;
// }
// float square(float side){
//     printf("Area of square is:%f \n",side*side);
// }

// float circle(float r){
//     printf("Area of circle is:%f \n",2*3.14*r);
// }

// float rectangle(float l,float b){
//     printf("Area of recatngle is:%f%f \n",l*b);
// }

//----recursive function -----
// #include<stdio.h>
// int printHello(int count);

// int main(){
//     printHello(5);
//     return 0;

// }

// int printHello(int count){
//     if(count==0){
//         return  0;
//     }
//     printf("Hello World \n");
//     printHello(count-1);

// }

//WAP to calculate sum of n natural number using Recursion
// #include<stdio.h>

// int sum(int n);

// int main(){
//     printf("Sum of number is :%d",sum(10));
//     return 0;

// }

// int sum(int n){
//     if(n==1){
//         return 1;
//     }
//     int sumM1= sum(n-1);
//     int sumT= sumM1+n;
//     return  sumT;

// }

// //WAP to calulate factorial of n
// #include<stdio.h>

// int factorial(int n);

// int main(){
//     printf("Factorial is:%d ",factorial(5));
// return 0;
// }

// int factorial(int n){
//     if(n==1){
//         return 1;
//     }
//     int factnM1 = factorial(n-1);
//     int factn = factnM1 * n;
//     return  factn;

// }

//Properties of recurssion
//1. anything that can be done eith iteration,is possible to do with recurrsion and viceversa
//2.recursion can sometimes gives most simple solutions
//3.base case is condition which stops recurssion
//4.Iterations has infinite loops & Recursion has stack overflow

// //WAP to convert celsius to farahient

// #include<stdio.h>

// float calculateCel(float celcius);

// int main(){
//     float far = calculateCel(37
//     );
//     printf("Farahint :%f",far);

// }

// float calculateCel(float celcius){
//     float far = celcius*(9.0/5.0)+32;
//     return far;

// }

