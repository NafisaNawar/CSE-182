/*Write a C program to find first and last digit of any number*/

#include <stdio.h>
int main()
{
    int n, sum=0, firstDigit, lastDigit;
    printf("Enter number = ");
    scanf("%d", &n);
    // Find last digit of a number
    lastDigit = n % 10;
    //Find the first digit by dividing n by 10 until n greater then 10
    while(n >= 10)
    {
        n = n / 10;
    }
    firstDigit = n;
    printf("first digit = %d and last digit = %d\n\n", firstDigit,lastDigit);
    return 0;
}
