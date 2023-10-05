#include<stdio.h>
int main( )
{
   int count, sum=0, num ;
   printf("Enter a positive number= ");
   scanf("%d",&num);


    for(count=1; count<=num; ++count)
    {
        sum+=count;

    }

       printf("Sum= %d",sum);


}

