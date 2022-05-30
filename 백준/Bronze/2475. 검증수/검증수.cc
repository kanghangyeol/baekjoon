#include<stdio.h>
#include<math.h>


int main()
{
    int a,b,c,d,e;
    int ans;
    int val;
    scanf("%d %d %d %d %d",&a,&b,&c,&d,&e);
    ans = pow(a,2) + pow(b,2) + pow(c,2) + pow(d,2) + pow(e,2);
    val = ans%10;
    
    printf("%d",val);
}   