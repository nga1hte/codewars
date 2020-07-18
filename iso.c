#include <stdio.h>
#include <string.h>

int solve(char *str){
    int len = strlen(str);
    char alpha[26] = {0};
    while(*str != '\0'){
        int caseUL = *str > 96 ? 'a' : 'A';
        if(alpha[*str%caseUL] == 0) alpha[*str%caseUL] = 1;
        else
            return 0;
        str++;
    }
    for(int i = 0; i < len; i++){
        if(alpha[i] == 0) return 0;
    }
    return 1;
}

int main(){
    printf("%d \n", solve("eabc"));
}
