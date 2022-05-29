#include<stdio.h>

int main()
{
    int a;

    scanf("%d",&a);
    for(int i=0;i<a;i++)
    {
        for(int p = a-1;p>i;p--)
        {
            printf(" ");
        }
        for(int q = 0;q<=2*i;q++)
        {
            printf("*");
        }
        printf("\n");
    }
}

