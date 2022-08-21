#include<stdio.h>

int main()
{
    int a;

    scanf("%d",&a);

    for(int i=0;i<a;i++)//묶음 출력의 횟수
    {
        if(i%2!=0)
        {
            printf(" ");
        }

        for(int j=0;j<a;j++)//묶음 안의 규칙 적용
        {
            printf("*");
            printf(" ");
        }
        printf("\n");
    }
}