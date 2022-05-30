#include<stdio.h>

int main()
{
    int a;
    scanf("%d",&a);

    for(int i=0;i<a;i++)
    {
        for(int j=a-1;j>i;j--)
        {
        printf(" ");
        }
        printf("*");
        for(int j=1;j<2*i;j++)
        {
        printf(" ");
        }
        if(i!=0)
            printf("*");
        printf("\n");
    }
}