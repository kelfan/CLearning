#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "strhandler.h"

int main() {
    char *w = "uncomfortable";
    char *w2 = "uncommon";
    char *w3 = "unconditionally";
    char *w4 = "unconscious";
    printf("Your name is %s.", w);

    char *common;
    int size = strlen(w);
    int size2;
    char *rs = "";
    int count = 0;
    printf("\nlength: %d", size);
    printf("\ntest concat: %s", concatStr("hello "," world"));
    printf("\ntest append: %s", appendStr("hello ",'c'));
    printf("\naddChar2Str: %s", addChar2Str("hello ",'c'));
    printf("\nsubStr: %s", subStr(w, 2, 5));

    char c5 = w2[2];
    rs = addChar2Str(rs, c5);
    printf("\nrs: %s", rs);

    for(int i=0; i<=size-1; i++){
        size2 = strlen(w2);
        for(int j=0; j<=size2-1; j++){
            if(w[i]==w2[j]){
                char* sub1 = subStr(w, i-1, size);
                char* sub2 = subStr(w2, j-1, size2);
                // printf("\nsubString: %s, %s ", sub1, sub2);
                int letter_count = compareStrComLength(sub1, sub2);
                if(letter_count >= 2){
                    char* commonStr = subStr(w2, j-1, j+letter_count-2);
                    printf("\ncommon String: %s", commonStr);
                }
                // printf("\nletter_count: %d", letter_count);
                // printf("\ncommon letter: %s", subStr(w, 0, letter_count));
                // char inside = w[i];
                // rs = addChar2Str(rs, inside);
                // printf("\nrs inside: %s", rs);
            }
        }
    }
    return 0;
}