//13.check the number is automorphic or not


#include <stdio.h>
#include<math.h>

int main()
{
    int n;
    printf("Enter the number: ");
    scanf("%d",&n);
    int x;
    x=n*n;
   printf("%d",x);
    int z;
    z=x%100;
    if(n==z)
    {
        printf("the number is automorphic number:%d", z);
    }
    else
    {
    printf("the number is not a automorphric number:%d",z);
    }
    return 0;
}
