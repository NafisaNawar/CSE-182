#include<stdio.h>

 main()
{


int d,year,month,week,day;


printf("Enter number of days =");
scanf("%d",&d);

year = d/365;
month = (d-year*365)/30;
week = (d-month*30-year*365)/7;
day = (d-week*7-month*30-year*365);
printf("Years= %d\nMonths= %d\nWeeks= %d\nDays= %d",year,month,week,day);
}

