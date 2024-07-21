// #include <stdio.h>

// int main(){

//     int a,b,c;

//     printf("Enter the value: ");
//     scanf("%d %d %d",&a,&b,&c);

//     if(a>b)
//     {
//         if(a>c)
//         {
//             printf("A is Max");
//         }
//         else
//         {
//             printf("C is Max");
//         }
//     }
//     else
//     {
//         if(b>a)
//         {
//             printf("B is Max");
//         }
//         else
//         {
//             printf("A is Max");
//         }        
//     }
// }

#include <stdio.h>

int main()
{

    int a,b,c;

    printf("Enter the value: ");
    scanf("%d %d %d",&a,&b,&c);

    if(a<b)
    {
        if(a<c)
        {
            printf("A is Min");
        }
        else
        {
            printf("C is Min");
        }
    }
    else
    {
        if(b<c)
        {
            printf("B is Min");
        }
        else
        {
            printf("C is Min");
        }
    }
}