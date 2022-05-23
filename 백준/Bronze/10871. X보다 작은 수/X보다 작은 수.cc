#include<stdio.h>

int main()
{
    int N,A;
    scanf("%d %d", &N, &A);
    int a[N];
    int b[N];
    int j = 0;

    for(int i = 0;i<N;i++)
    {
        scanf("%d",&a[i]);
    }

    for(int i = 0;i<N;i++)
    {
        if(A>a[i])
        {
            b[j] = a[i];
            j++;
        }
    }
    for(int i = 0;i<j;i++)
    {
    printf("%d ",b[i]);
    }
}