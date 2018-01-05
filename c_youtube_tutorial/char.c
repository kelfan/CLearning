#include <stdio.h>
#include <stdlib.h>
#include <mem.h>


int main()
{
    char str[9] = "lucky one"; // ��� lucky oneJ
    char exact[8] = "lucky one"; // ��� lucky onJ
    char more[13] = "lucky one"; // ���  lucky onelucky onlucky oneJ
    char less[7] = "lucky one"; // ��� lucky olucky onelucky onJ
    char first[0] = "lucky one"; // ��� lucky olucky onelucky onJ
    printf("Str is %s\nexact is %s \n more is %s\n less is %s\n first is %s\n",
           str,
           exact,
           more,
           less,
           first);

    str[2] = 'r'; // Change the third letter
    printf("Str is %s\n",str);

    char food[] = "tuna";
    printf("food is %s\n",food);

    strcpy(food, "bacon"); // Variable food change to bacon
    printf("food is %s\n",food);

    return 0;
}
