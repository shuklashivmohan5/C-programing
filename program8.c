#include <stdio.h>

int main()
{
    char name[20];
    int qty, price;
    float dis, netTotal, total;

    printf("Enter product name:- ");
    scanf("%s", &name);

    printf("Enter Qty:- ");
    scanf("\n%d", &qty);

    printf("Enter Product Price:- ");
    scanf("\n%d",&price);

     total  = price * qty;
     printf("\nTotal is %.2f",total);


     if(total>=1500)
     {
     dis = total * 0.15;
     printf("\nProduct Discount:- %.2f",dis);  
     }
     else if(total>=1000)
     {
      dis = total * 0.10;
      printf("\nProduct Discount:- %.2f",dis);
     }
     else if(total>=800)
     {
        dis = total * 0.8;
        printf("\nProduct Discount:- %.2f",dis);
     }
     else
     {
        printf("\nNo Discount");
     }

     netTotal = total - dis;
     printf("\nTotal Pay Amount is %.2f",netTotal);
}