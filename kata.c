#include <stddef.h>
#include <stdio.h>
#include <ctype.h>

size_t duplicate_count(const char* text) {
  int freq[128] = {0}, dups = 0;
  while (*text) dups += ++freq[tolower(*text++)] == 2;
  return dups;
}

int main(){
    printf("%d\n", duplicate_count("00112233445566778899"));
    return 0;
}
