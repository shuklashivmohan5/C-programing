#include <stdio.h>

int main()
{
    int rollnum, sub1, sub2, sub3, total;
    char name[20];
    float avg;

    printf("\n Enter your name:- ");
    scanf("%s", &name);

    printf("\n Enter your Roll No.:- ");
    scanf("%d", &rollnum);

    printf("\n Enter your Sub:- ");
    scanf("%d %d %d", &sub1, &sub2, &sub3);

    total = sub1 + sub2 + sub3;

    avg = total / 3;
    printf("\n %f", avg);

    if (sub1 >= 35 && sub2 >= 35 && sub3 >= 35)
    {
        printf("\n Pass Out");

        if (avg >= 90)
        {
            printf("\n GRADE A");
        }
        else if (avg >= 80)
        {
            printf("\n GRADE B");
        }
        else if (avg >= 70)
        {
            printf("\n GRADE C");
        }
        else if (avg >= 60)
        {
            printf("\n GRADE D");
        }
        else if (avg >= 50)
        {
            printf("\n GRADE E");
        }
        else
        {
            printf("\n FAIL");
        }
    }
    else
    {
        printf("\n FAIL");
    }
}