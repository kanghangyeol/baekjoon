#include<stdio.h>

int main()
{
    int N;
    scanf("%d",&N);
    int a;
    int max;
    int min;

    scanf("%d",&a);
    max = a;
    min = a;
    for(int i = 1; i<N;i++)
    {
        scanf("%d",&a);     
        if(max<a)
            max = a; 
        if(min>a)
            min = a;
    }
    printf("%d %d",min,max);
}