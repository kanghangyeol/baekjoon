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
        printf("\n");
    }

    for(int i=0;i<a;i++)
    {
        for(int p = a;p>i;p--)
        {
            printf("*");
        }
        printf("\n");
    }
}

