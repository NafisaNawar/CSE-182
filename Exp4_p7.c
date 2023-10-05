/*Write a C program to calculate sum of digits of any number*/

#include <stdio.h>

int main()
{
    int num, sum=0;


    printf("Enter any number to find sum of its digit: ");
    scanf("%d", &num);


    while(num!=0)
    {

        sum += num % 10;

        /*sum started from the last digit,,, % gives the last digit,,,,
        and num/10 gives the digit without last digit*/
        num = num / 10;
    }

    printf("Sum of digits = %d", sum);

    return 0;
}
