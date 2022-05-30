#include<stdio.h>

int main()
{
    int L;
    int ans =0;
    scanf("%d",&L);

    for(int i =5;i>0;i--)
    {
        while(L-i>=0)
        {
        L=L-i;
        ans+=1;
        }
    }
    printf("%d",ans);
}