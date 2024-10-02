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
 

#include<stdio.h>
int main(){
    int n;
    printf("Enter a number:");
    scanf("%d \n",&n);
    // int i=1;

    // while(i<=n){
    //     printf("%d \n",i);
    //     i++;
    // }
    for ( int i = 0; i<=n ; i++){
        printf("%d \n", i);
    }
}