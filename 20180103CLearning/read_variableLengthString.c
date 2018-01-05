char* str;  
char* _str; 

int i = 1;  
str = (char*)malloc(sizeof(char) * (i + 1));
while('\n' != (str[i - 1] = getchar()))
{  
     i++;  
     ...  
}