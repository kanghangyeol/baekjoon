#include<stdio.h>

int main()
{
    int a = 1,b = 1,c = 2,d = 2,e = 2,f = 8;
    int A,B,C,D,E,F;
    scanf("%d %d %d %d %d %d", &A, &B, &C, &D, &E, &F);
    a = a - A;
    b = b - B;
    c = c - C;
    d = d - D;
    e = e - E;
    f = f - F;

    printf("%d %d %d %d %d %d",a,b,c,d,e,f);
}