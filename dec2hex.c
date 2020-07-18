#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char *hex(int dec){
    char *h = malloc(sizeof(char) * 8);
    char *r = malloc(sizeof(char) * 8);
    int i = 0;
    int temp = 0;
    if(dec < 16 && dec > -1 ){
        r[0] = '0';
        r[1] = (dec < 10) ? dec + 48 : dec + 55; 
        r[2] = '\0';
        return r;
    }
    while(dec != 0){
        temp = dec % 16;
        if(temp < 10)
            h[i] = temp + 48;
        else
            h[i] = temp + 55;
        i++;
        dec /= 16;
    }
    h[i] = '\0';
    int j = 0;
    for(int i = strlen(h) - 1 ; i >= 0; i--){
       r[j] = h[i]; 
       j++;
    }
    r[j] = '\0';
    free(h);
    return r;
}

int main(){
    printf("%s\n", hex(15));


}
