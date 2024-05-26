//7.write the c program to get grade

#include <stdio.h>
int main()
{
    int n;
    printf("Enter the the marks\n");
    scanf("%d",&n);
    if(n>=90)
    {
        printf("Grade:A\n");
    }
    if(n>=80&&n<=89)
    {
        printf("Grade:B\n");
    }
    if(n>=70&&n<=79)
    {
        printf("Grade:c\n");
    }
    if(n>=60&&n<=69)
    {
        printf("Grade:D\n");
    }
    if(n<60)
    {
        printf("Grade:F");
    }
}

