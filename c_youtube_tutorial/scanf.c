#include <stdio.h>
#include <stdlib.h>
#define MYNAME "tuna apple"
#include "NameInfo.h"

int main()
{
    char firstName[20];
    char crush[20];
    int numberOfBabies;

    printf("what is your name? \n");
    scanf("%s", firstName);

    printf("who are you going to marry? \n");
    scanf("%s",crush);

    printf("how many kids will you have? \n");
    scanf("%d", &numberOfBabies); //除了Array外都要使用 & 传值

    printf("%s and %s are in love and plan to have %d babies",
           firstName,
           crush,
           numberOfBabies);

    return 0;
}
