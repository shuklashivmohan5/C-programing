// Q.1 Write a Program to evaluate the formula: (x + y)(2)

// #include <stdio.h>

// int main(){
//     int x = 4*2;
//     int y = 2*2;
//     int z = x+y;

//     printf("The value of x+y is %d",z);
//     return 0;
// }

// Q.2 Write a Program to evaluate the formula: (x − y)(2)

// #include <stdio.h>

// int main(){
//     int x = 4*2;
//     int y = 2*2;
//     int z = x-y;

//     printf("The value of x-y is %d",z);
//     return 0;
// }

// Q.3 Write a Program to evaluate the formula: (x + y)(3)

// #include <stdio.h>

// int main(){
//     int x = 4;
//     int y = 2;
//     int z = x+y;

//     z = (x*x*x + (3*x*x*y) + (3*x*y*y) + y*y*y);

//     printf("The value of x+y^ is %d",z);
// }

// Q.4 Write a Program to Swap two variables using the third variable.

// #include <stdio.h>

// int main(){
//     int a = 5;
//     int b = 10;
//     int temp;

//     temp = a;
//     a = b;
//     b = temp;

//     printf("The value of a = %d, b = %d", a ,b);
//     return 0;
// }

// Q.5 Write a Program to Swap two variables without using a third variable.

#include <stdio.h>

int main(){
    int a = 5;
    int b = 10;

    a = a+b; // a now becomes 15
    b = a-b; // b now becomes 5
    a = a-b; // a now becomes 10

    printf("The value of a = %d, b = %d", a ,b);
    return 0;
}