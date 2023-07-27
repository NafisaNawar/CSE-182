#include<stdio.h>

main()

{
    int year;

    printf("Enter the year :");
    scanf("%d",&year);

    (year%4==0 && year%100!=0)?printf("The year is Leap year"):
        (year%400==0)?printf("The year is Leap year"):printf("The year is not Leap year");
}
