//9.write a c program to find bmi

#include<stdio.h>
int main()
{
    float w,h;
    printf("enter the w:\n");
    scanf("%f",&w);
    printf("enter the h:\n");
    scanf("%f",&h);
    int bmi=w/(h*h);
    if(bmi<=18.5)
    {
        printf("under weight\n");
    }
    if(bmi>=18.5&&bmi<=24.9)
    {
        printf("Normal weight");
    }
    if(bmi>=25&&bmi<=29.9)
    {
        printf("overweight");
    }
    if(bmi>=30)
    {
        printf("obesity");
    }
    
}

