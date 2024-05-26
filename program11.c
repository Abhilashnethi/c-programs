//11. the sum of  a number program example:454 the o/p:13


#include <stdio.h>

int main()
{
    int n,sum=0,r;
    printf("Enter the number: ");
    scanf("%d",&n);
    while(n>0)
    {
        r=n%10;
        sum=sum+r;
        n=n/10;
    }
    printf("the sum:%d",sum);

    return 0;
}
