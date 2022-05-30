#include<stdio.h>

int main()
{
    int a;

    scanf("%d",&a);

    for(int i=0;i<a-1;i++)
    {
        for(int p = 0;p<=i;p++)
        {
            printf("*");
        }
        for(int q = a*2-2;q>i*2;q--)
        {
            printf(" ");
        }
        for(int p = 0;p<=i;p++)
        {
            printf("*");
        }
        printf("\n");
    }
    
    for(int i=0;i<a;i++)
    {
        for(int q = a;q>i;q--)
        {
            printf("*");
        }
        for(int p = 0;p<2*i;p++)
        {
            printf(" ");
        }
        for(int q = a;q>i;q--)
        {
            printf("*");
        }
        printf("\n");
    }
    
}