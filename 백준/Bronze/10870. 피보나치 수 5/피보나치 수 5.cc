#include<stdio.h>

int main()
{
    int n;
    int sum = 0;

    scanf("%d",&n);
    int a[n];
    a[0]=0;
    a[1]=1;
    
    if(n==0)
    {
        printf("%d",a[0]);
        return 0;
    }
    else if(n==1)
    {
        printf("%d",a[1]);
        return 0;
    }
    else
    {
    for(int i = 2;i<=n;i++)
        a[i] = a[i-1] + a[i-2];
    }
    printf("%d",a[n]);
}