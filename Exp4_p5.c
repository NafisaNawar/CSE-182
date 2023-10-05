#include<stdio.h>
int main()
{
    long long n;
    int digit=0;

    printf("Enter the number: \n");
    scanf("%11d",&n);

    do
    {
        n/=10; /*first i divided n by 2 , thats why id showed 7 digits*/
    ++digit;
    }
    while(n!=0);
        printf("Number of digits: %d",digit);

}
