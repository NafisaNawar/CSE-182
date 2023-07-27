#include<stdio.h>
 main()
{
  int a, b, c, max;
printf("Enter three numbers:\n");
scanf("%d%d%d",&a,&b,&c);

max = (a>b)?((a>c)?a:c):((b>c)?b:c);
  /*Conditional operator - ? means if the expression is true and : means if the expression is false then what would be the expression */

printf("Maximum number is = %d",max);
}

