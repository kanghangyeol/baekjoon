#include<stdio.h>

int main()
{
    int num[8];
    int t = 0;
    
    while(t!=8)
    {
        scanf("%d",&num[t]);
        t++;
    }

    int i;
    for(i=0;i<8;i++)
    {
        if(num[i]!=i+1)
        break;
    }
    if(i==8)
    {
        printf("ascending");
        return 0;
    }
    
    for(i=0;i<8;i++)
    {
        if(num[i]!=8-i)
        break;
    }
    if(i==8)
    printf("descending");
    else
    printf("mixed");
}