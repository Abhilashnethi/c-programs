 //5.even or odd


#include <stdio.h>

int main()
{
    int n;
    printf("enter the number\n");
    scanf("%d",&n);
    
    if(n%2==0)
    {
        printf("The number is even");
    }
    else
    {
        printf("The number is odd");
    }
    return 0;
}

