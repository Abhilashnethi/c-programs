//8write c program on  temperature


#include <stdio.h>
int main()
{
    int n;
    printf("the temperature:\n");
    scanf("%d",&n);
    if(n>30)
    {
        printf("it`s hot outside,stay hydrated!");
    }
    if(n>=20&&n<=30)
    {
        printf("The weather is nice and warm.");
    }
    if(n>=10&&n<=19)
    {
        printf("it`s a bit chilly wear a jacket.");
        
    }
    if(n<10)
    {
        printf("it`s cold outside,stay warm!");
    }
    return 0;
}
