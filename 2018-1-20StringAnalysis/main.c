#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char* appendStr(char* s, char c)
{
        int len = strlen(s);
        char* s2 = (char*)malloc(sizeof(char) * (len+1));
        strcpy(s2, s);
        s2[len] = c;
        s2[len+1] = '\0';
        printf("strAppend: %s", s);
        return s2;
}

char* concatStr(char* str1, char* str2){
    char* str3 = (char*)malloc(1 + strlen(str1) + strlen(str2));
    strcpy(str3, str1);
    strcat(str3, str2);
    printf("%s", str3);
    return str3;
}


int main(){
    char *w = "uncomfortable";
    char *w2 = "uncommon";
    char *w3 = "unconditionally";
    char *w4 = "unconscious";
    printf("Your name is %s.", w);

    char *common;
    int size = strlen(w);
    int size2;
    char *rs[256];
    int count = 0;
    printf("\nlength: %d", size);
    printf("\ntest concat: %s", concatStr("hello "," world"));
    printf("\ntest append: %s", appendStr("hello ",'c'));

    for(int i=0; i<=size-1; i++){
        size2 = strlen(w2);
        for(int j=0; j<=size2-1; j++){
            if(w[i]==w2[j]){
                rs[count] = w2[j];
                count++;
            }
        }
        printf("\nletter: %s", rs);
    }
}