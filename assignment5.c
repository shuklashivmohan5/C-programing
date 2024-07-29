#include <stdio.h>

int main(){
    int a,b,c, min;

    printf("Enter the value of the first number:- ");
    scanf("%d",&a);

    printf("Enter the value of the second number:- ");
    scanf("%d",&b);

    printf("Enter the value of the third number:- ");
    scanf("%d",&c);

    min  = (a<b) ? (a<c ? a:c):(b<c ? b:c);

    printf("The mininum value is: %d",min);

    return 0;
}