#include<stdio.h>

int main()
{
    int N;
    int new1,new2;
    int first,second;
    int i = 0;//사이클 횟수
    
    scanf("%d",&N);
    int k= N;
    while(1)
    {
        second = N % 10;
        first = N /10;
        new1 = second + first;
        new2 = second*10 + new1%10;
        i++;

        if(k == new2)
            break;

        N = new2;
    }

    printf("%d",i);
}