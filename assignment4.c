// #include <stdio.h>

// int main()
// {

//     int a,b,c;

//     printf("Enter the value: ");
//     scanf("%d %d %d",&a,&b,&c);

//     if(a<b)
//     {
//         if(a<c)
//         {
//             printf("A is Min");
//         }
//         else
//         {
//             printf("C is Min");
//         }
//     }
//     else
//     {
//         if(b<c)
//         {
//             printf("B is Min");
//         }
//         else
//         {
//             printf("C is Min");
//         }
//     }
// }


#include <stdio.h>

int main() {
    int num1, num2, num3, num4, num5, max;

    printf("Enter the value of the first number: ");
    scanf("%d", &num1);
    printf("Enter the value of the second number: ");
    scanf("%d", &num2);
    printf("Enter the value of the third number: ");
    scanf("%d", &num3);
    printf("Enter the value of the fourth number: ");
    scanf("%d", &num4);
    printf("Enter the value of the fifth number: ");
    scanf("%d", &num5);

    if (num1 > num2) {
        if (num1 > num3) {
            if (num1 > num4) {
                if (num1 > num5) {
                    max = num1;
                } else {
                    max = num5;
                }
            } else {
                if (num4 > num5) {
                    max = num4;
                } else {
                    max = num5;
                }
            }
        } else {
            if (num3 > num4) {
                if (num3 > num5) {
                    max = num3;
                } else {
                    max = num5;
                }
            } else {
                if (num4 > num5) {
                    max = num4;
                } else {
                    max = num5;
                }
            }
        }
    } else {
        if (num2 > num3) {
            if (num2 > num4) {
                if (num2 > num5) {
                    max = num2;
                } else {
                    max = num5;
                }
            } else {
                if (num4 > num5) {
                    max = num4;
                } else {
                    max = num5;
                }
            }
        } else {
            if (num3 > num4) {
                if (num3 > num5) {
                    max = num3;
                } else {
                    max = num5;
                }
            } else {
                if (num4 > num5) {
                    max = num4;
                } else {
                    max = num5;
                }
            }
        }
    }

    printf("The maximum value is: %d\n", max);

    return 0;
}
