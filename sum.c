#include <stdio.h>
#include <inttypes.h>

int begin(int r){
    if(r == 1)
        return 1;
    return (2*(r-1)) + begin(r - 1);   
}

uint64_t rowSumOddNumbers(uint32_t n)
{
    int start = begin(n);
    int sum = start;
    for(int i = 1; i < n; i++){
      start += 2;
      sum += start;
    }
    return sum;
}

int main(){
    printf("%d\n", rowSumOddNumbers(42));
    return 0;
}
