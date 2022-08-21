#include<stdio.h>

int main()
{
    int num;
    int v,e;
    int ans = 0;
    scanf("%d",&num);
        
    for(int i=0;i<num;i++)
    {
        scanf("%d %d",&v,&e);
        ans = 2 - v + e;
        printf("%d\n",ans);
    }

}