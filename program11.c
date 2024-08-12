#include<stdio.h>

int main()
{
    int num;

    printf("Enter array size:- ");
    scanf("%d",&num);

    int a[num];

    printf("\nEnter any array elements:- ");
    for(int i=0; i<num; i++)
    {
        printf("a[%d] = ",i);
        scanf("%d",&a[i]);
    }

    printf("\nLenght of the array :- %d",num);

    return 0;
}
