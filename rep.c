#include <stddef.h>
#include <ctype.h>
#include <stdio.h>

size_t duplicate_count(const char *text) {
    size_t rep = 0;
  
    char chr_map[36] = { 0 };
    while(*text != '\0'){
        int index = isdigit(*text) ? *text - '0' + 26 : (isupper(*text) ? *text - 'A' : *text - 'a');
        chr_map[index] += 1;
        text++;
    }
    for(int i = 0; i < 36; i++)
      if(chr_map[i] > 1) rep++;
    
    return rep;
}

int main(){
    printf("%d\n", duplicate_count("00"));
    return 0;
}
