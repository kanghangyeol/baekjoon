#include<stdio.h>

int main()
{
    int a,b,c;
    int M;
    scanf("%d %d %d",&a,&b,&c);

    if(a==b && b==c && a==c)
    {
        printf("%d",10000+(a*1000));
    }


    else if(a==b)
    {
        printf("%d",1000+(a*100));
    }
    else if(a==c)
    {
        printf("%d",1000+(a*100));
    }
    else if(b==c)
    {
        printf("%d",1000+(b*100));
    }


    else
    {
        M = a;
        if(b>a)
            {
                M = b;
                if(c>M)
                M = c;
            }
        else if(c>a)
        M = c;

        printf("%d",M*100);
    }
}