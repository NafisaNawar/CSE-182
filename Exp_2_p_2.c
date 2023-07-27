#include<stdio.h>
int main()

{
    int r,diameter;
    float circumference,area,pie = 3.14;

    printf("Enter radius of the circle= \n");
    scanf("%d",&r);

    diameter = 2*r;

    circumference = 2*pie*r;

    area = pie*r*r;

    printf("Diameter =%d\nCircumference = %f\nArea = %f", diameter,circumference,area);

}


