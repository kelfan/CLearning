#include <stdio.h>
#include <stdlib.h>

/* The first byte of a UTF-8 character
 * indicates how many bytes are in
 * the character, so only check that
 */
int numberOfBytesInChar(unsigned char val) {
    if (val < 128) {
        return 1;
    } else if (val < 224) {
        return 2;
    } else if (val < 240) {
        return 3;
    } else {
        return 4;
    }
}

int main(){
    FILE *fin;
    FILE *fout;
    int character;
    fin = fopen("in.txt", "r");
    fout = fopen("out.txt","w");
    while( (character = fgetc(fin)) != EOF) { //End of File (EOF)
        for (int i = 0; i < numberOfBytesInChar((unsigned char)character) - 1; i++) {
            putchar(character);
            fprintf(fout, "%c", character); //格式化输出到一个流/文件中
            character = fgetc(fin); // fgetc:每次只能输入或者输出一个字符
        }
        putchar(character);
        printf(" ");
        fprintf(fout, "%c ", character); // %c character: 输出字母而不是数字
    }
    fclose(fin);
    fclose(fout);
    printf("\nFile has been created...\n");
    return 0;
}
