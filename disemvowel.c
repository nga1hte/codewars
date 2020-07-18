#include <stdio.h>
#include <stdlib.h>
#include <string.h>


char *disemvowel(const char *str){
    char *newStr = malloc(sizeof(char)*strlen(str)+1);
    int i = 0;
    int j = 0;
    while(str[i] != '\0'){
        switch(str[i]){
            case 'a':
            case 'A':
            case 'e':
            case 'E':
            case 'i':
            case 'I':
            case 'o':
            case 'O':
            case 'u':
            case 'U':
                break;
            default:
                newStr[j++] = str[i];
        }
        i++;
    }
    newStr[j] = '\0';
    return newStr;
}

int main(){
    printf("%s\n",disemvowel("Hello World"));
    return 0;
}
