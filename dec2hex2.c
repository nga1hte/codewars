#include <stdio.h>
#include <stdlib.h>

unsigned char wrap(int a){
    if(a > 255) return 255;
    else if(a < 0) return 0;
    else return a;
}

int rgb(int r, int g, int b, char *output){
    sprintf(output, "%02X%02X %02X", wrap(r), wrap(g), wrap(b));
    return 0;
}

int main(){
    char *output = malloc(sizeof(char) * 7);
    rgb(0, 15, 255, output);
    printf("%s\n", output);
    return 0;
}
