#include<stdio.h>

int main()
{
    int a;

    scanf("%d",&a);

    for(int i=0;i<a-1;i++)
    {
        for(int p = a-1;p>i;p--)
        {
            printf(" ");
        }
        for(int q = 0;q<=i*2;q++)
        {
            printf("*");
        }
        printf("\n");
    }

    for(int i=0;i<a;i++)
    {
        for(int p = 0;p<i;p++)
        {
            printf(" ");
        }
        for(int q = 2*a-1;q>2*i;q--)
        {
            printf("*");
        }
        printf("\n");
    }
}