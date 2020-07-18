#include <stdio.h>

int isIso(char *str){
    char alpha[26] = {0};
    while(*str != '\0'){
        int caseUL = *str > 96 ? 'a' : 'A';
        if(alpha[*str%caseUL] == 0) alpha[*str%caseUL] = 1;
        else
            return 0;
        str++;
    }
    return 1;
}

int main(){
    printf("%d \n",isIso("abcda"));
    return 0;
}
