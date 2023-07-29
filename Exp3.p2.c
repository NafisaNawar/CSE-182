#include <stdio.h>

int main()
 {

    int num;

    printf("Enter a number: ");
    scanf("%d", &num);

    if (num < 0)
        printf("It's a negative number.");


    else if (num > 0.0)
        printf("It's a positive number.");


    else
        printf("It's Zero.");

    return 0;
}


