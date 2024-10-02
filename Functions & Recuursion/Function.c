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
