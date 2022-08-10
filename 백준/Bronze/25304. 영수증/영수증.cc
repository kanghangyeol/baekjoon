#include<stdio.h>

int main()
{
    int price, count;
    int type;
    int all_price;
    int ALL = 0;

    scanf("%d", &all_price);
    scanf("%d", &type);

    for(int i = 0; i<type; i++)
    {
    scanf("%d %d",&price, &count);
    ALL += price*count;
    }
    if(ALL == all_price)
    printf("Yes");
    else
    printf("No");
}