#include<stdio.h>

int main()
{



float cm,meter,km;

printf("Enter the length in centimeter =");
scanf("%f",&cm);

meter = cm/100;
km = cm/100000;

printf("Length in meter= %.4f m\nLength in kilometer= %.4f km",meter,km); /* %.4 tells to print only the first 4 digit after the point */
}
