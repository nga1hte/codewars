#include <stdio.h>
#include <inttypes.h>

unsigned long long rowSumOddNumbers(double n)
{
    return n * n * n;
}

int main(){
    printf("%lld\n", rowSumOddNumbers(2015671));
    return 0;
}
