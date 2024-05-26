 //2.area and circumference


#include<stdio.h>
#define pi 3.14
int main()
{
    float radius;
    float area;
    printf("enter the radius\n");
    scanf("%f",&radius);
    printf("the area of circle:%f\n",pi*radius*radius);
    printf("the circumference of circle:%f",2*pi*radius);
    return 0;
    
    
}

