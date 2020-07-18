#include <stdio.h>
#include <stdlib.h>
#include <string.h>


char *disemvowel(const char *str){
    char *newStr = malloc(sizeof(char)*strlen(str)+1);
    for(char *q = newStr; *str; str++)
        if(!strchr("aeiouAEIOU", *str)) *q++ = *str;
    return newStr;
}

int main(){
    printf("%s\n",disemvowel("Hello World"));
    return 0;
}
