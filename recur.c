#include <stdio.h>

int seq(int n){
    if(n<3) return n;
    return seq(n-1) + seq(n-2) + seq(n-3);
}

int main(){
    int n = 5;
    printf("%d\n", seq(n));
}
