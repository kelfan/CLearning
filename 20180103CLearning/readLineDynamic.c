#include <stdio.h>
#include <stdlib.h> //for dynamic allocation functions

//the function to read lines of variable length

char* scan_line(char *line)
{
    int ch; //as getchar() returns `int`

    if( (line = malloc(sizeof(char))) == NULL) //allocating memory
    {
        //checking if allocation was successful or not
        printf("unsuccessful allocation");
        exit(1);
    }

    line[0]='\0';

    for(int index = 0; ( (ch = getchar())!='\n' ) && (ch != EOF) ; index++)
    {
        if( (line = realloc(line, (index + 2)*sizeof(char))) == NULL )
        {
            //checking if reallocation was successful or not
            printf("unsuccessful reallocation");
            exit(1);
        }

        line[index] = (char) ch; //type casting `int` to `char`
        line[index + 1] = '\0'; //inserting null character at the end
    }

    return line;
}

int main(void)
{
    char *a = NULL;

    a = scan_line(a); //function call to scan the line

    printf("%s\n",a); //printing the scanned line

    free(a); //don't forget to free the malloc'd pointer
}