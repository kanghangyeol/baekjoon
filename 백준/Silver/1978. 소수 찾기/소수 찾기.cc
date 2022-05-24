#include<stdio.h>

int main()
{
    int num;
    int a = 0;
    int N = 0;
    int i = 0;
    scanf("%d",&num);

    while(num--)
    {
        scanf("%d",&a);
        for(i = 2;i<a;i++)
        {
            if(a%i==0) // 소수가 아님
            break;
        }
        
        if(a==i)
        N++;
    }

    printf("%d",N);

    return 0;
}