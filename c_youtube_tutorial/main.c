#include <stdio.h>
#include <stdlib.h>
#define MYNAME "tuna apple"
#include "NameInfo.h"

int main()
{
    int a;
    int b;
    int c;

    a = b = c = 100;
    printf("%d %d %d \n", a, b, c);

    float age1, age2, age3, average;
    age1 = age2 = 4.0;

    printf("Enter your age \n");
    scanf("%f", &age3);

    average = (age1 + age2 + age3) /3;
    printf("\n average age is %f", average);

    return 0;
}
