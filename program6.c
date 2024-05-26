//6.greater in three numbers


#include <stdio.h>
int main()
{
    int a,b,c;
    printf("Enter the number\n");
    scanf("%d%d%d",&a,&b ,&c);
    if(a>b&&a>c)
    {
        printf("The A is greater\n");
    }
    else if(b>c&&b>a)
    {
        printf("The B is greater\n");
    }
    else 
    {
        printf("The C is greater");
    }
    return 0;
}

