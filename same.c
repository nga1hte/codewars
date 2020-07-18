#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>

//bool comp(const int *a, const int *b, size_t n){
//    for(int i = 0; i < n; i++){
//        int k = 0;
//        for(int j = 0; j < n; j++){
//            if(b[i] == a[j]*a[j]) k++;
//        }
//        if(k == 0) return false;
//    }
//    return true;
//}

void swap(int *a, int *b){
    int temp = *a;
    *a = *b;
    *b = temp;
}

void sort(int *a, int len){
    for(int i = 0; i < len - 1; i++){
        for(int j = 0; j < len - i - 1; j++){
            if(a[j] > a[j+1]){
                swap(&a[j], &a[j+1]);
            }
        }
    }
}

bool comp(int *a, int *b, size_t n){
    sort(a, n);
    sort(b, n);
    for(size_t i = 0; i < n; i++){
        if(b[i] != a[i]*a[i])
            return false;
    }
    return true;
}

int main(){
    int a[4] = {2, 3, 4, 5};
    int b[4] = {25, 9, 16, 4};
    if(comp(a, b, 4)) printf("True\n");
    else printf("False\n");
    return 0;
}
