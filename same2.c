#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>

bool comp(int *a, int *b, size_t n){
    int i = 0;
    for(int k = 0; k < n + 1; k++){
        if((b[i] == a[i] * a[i]) && ( i < n)){
            a[k] = 0;
            k = -1;
            i++;
        }
        if(k==n) return false;
        if(i==n) return true;
    }
}

int main(){
    int a[4] = {2, 3, 4, 5};
    int b[4] = {4, 9, 16, 25};
    if(comp(a, b, 4)) printf("True\n");
    else printf("False\n");
    return 0;
}
