//
// Created by Administrator on 11/02/2018.
//

#ifndef INC_2018_1_20STRINGANALYSIS_STRHANDLER_H
#define INC_2018_1_20STRINGANALYSIS_STRHANDLER_H

char* addChar2Str(char* s, char c)
{
    int len = strlen(s);
    char* tmp;
    tmp = (char*)malloc(sizeof(char) * (len+1));
    strcpy(tmp, s);
    tmp[len] = c;
    tmp[len+1] = '\0';
    s = tmp;
    printf("\naddChar2Str: %s", s);
    return s;
}


char* appendStr(char* s, char c)
{
    int len = strlen(s);
    char* s2 = (char*)malloc(sizeof(char) * (len+1));
    strcpy(s2, s);
    s2[len] = c;
    s2[len+1] = '\0';
    printf("\nstrAppend: %s", s);
    return s2;
}

char* concatStr(char* str1, char* str2){
    char* str3 = (char*)malloc(1 + strlen(str1) + strlen(str2));
    strcpy(str3, str1);
    strcat(str3, str2);
    printf("%s", str3);
    return str3;
}

char* newStrLen(int len){
    return (char*)malloc(1 + len);
}

int compareStrComLength(char* str1, char* str2){
    int len1 = strlen(str1);
    int len2 = strlen(str2);
    int maxlen;
    if(len1 > len2){
        maxlen = len2;
    }else{
        maxlen = len1;
    }
    int count = 0;
    for(int i=0; i<=maxlen-1; i++){
        if(str1[i]==str2[i]){
            count++;
        }else{
            return count;
        }
    }
    return count;
}

char* subStr(char* inStr, int start, int end){
    int len = end - start+1;
    char* result = newStrLen(len);
    for(int i=0; i<=len-1; i++){
        // printf("\ninStr[i]: %c ", inStr[start+i-1]);
        result[i] = inStr[start+i-1];
    }
    result[len]='\0';
    // printf("\nresult: %s", result);
    return result;
}



#endif //INC_2018_1_20STRINGANALYSIS_STRHANDLER_H
