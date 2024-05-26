//14.check the number the is amstrong number or not


#include <stdio.h>

int main()
{
    int n,sum=0,r,temp;
    printf("Enter the number: ");
    scanf("%d",&n);
    temp=n;
    while(n>0)
    {
        r=n%10;
        sum=sum+(r*r*r);
        n=n/10;
    }
    if(temp=sum)
    {
        printf("the number is amstrong number "); 
    }
    else
    {
        printf("the number is not amstrong number ");
    }
    return 0;
}

