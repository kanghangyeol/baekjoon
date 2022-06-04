#include<stdio.h>

int main()
{
    int a;
    scanf("%d",&a);

    for(int i=0;i<a;i++)
    {
        printf("*");
    }
    for(int i=0;i<2*a-3;i++)
    {
        printf(" ");
    }
    for(int i=0;i<a;i++)
    {
        printf("*");
    }
    printf("\n");



    for(int i=0;i<a-2;i++)
    {
        for(int j=0;j<=i;j++)
        {
            printf(" ");
        }

        printf("*");

        for(int j=0;j<a-2;j++)
        {
            printf(" ");
        }

        printf("*"); 

        for(int j=2*a-5;j>2*i;j--)
        {
            printf(" ");
        }

        printf("*");

        for(int j=0;j<a-2;j++)
        {
            printf(" ");
        }

        printf("*");
        printf("\n");
    }



    for(int i=0;i<a-1;i++)
    {
        printf(" ");
    }
    printf("*");
    for(int j=0;j<a-2;j++)
    {
        printf(" ");
    }
    printf("*");
    for(int j=0;j<a-2;j++)
    {
        printf(" ");
    }
    printf("*");
    printf("\n");



    for(int i=1;i<a-1;i++)
    {
        for(int j=a-1;j>i;j--)
        {
            printf(" ");
        }

        printf("*");

        for(int j=0;j<a-2;j++)
        {
            printf(" ");
        }

        printf("*"); 

        for(int j=0;j<2*i-1;j++)
        {
            printf(" ");
        }

        printf("*");

        for(int j=0;j<a-2;j++)
        {
            printf(" ");
        }

        printf("*");
        printf("\n");
    }


    for(int i=0;i<a;i++)
    {
        printf("*");
    }
    for(int i=0;i<2*a-3;i++)
    {
        printf(" ");
    }
    for(int i=0;i<a;i++)
    {
        printf("*");
    }
}