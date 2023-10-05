#include<stdio.h>
int main()
{
    int i=1,n,sum=0;
    printf("Enter the number: \n");
    scanf("%d",&n);

    while(i<=n)
        {sum+=i;
        i++;
        }
        printf("Sum of all natural numbers between 1 to %d= %d",n,sum);



}

