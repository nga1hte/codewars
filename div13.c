#include <stdio.h>

int len(long long n){
  int i = 0;
  while(n != 0){
      n /= 10;
      i++;
  }
  return i;
}

long long rev(long long n){
    long long rev = 0;
    int rem = 0;
    while(n != 0){
        rem = n%10;
        rev = (rev*10) + rem;
        n /= 10;
    }
    return rev;
}

long long sthirt(long long n){
    int rem[6] = {1, 10, 9, 12, 3, 4};
    int l = len(n);
    long long sum = 0;
    for(int i = 0; i < l; i++){
        sum += (n % 10) * rem[i%6];
        n /= 10;
    }
    return sum;
}

long long thirt(long long n){
    if(len(sthirt(n)) == 2)
        return sthirt(n);
    printf("%lld\n", sthirt(n));
    return thirt(sthirt(n));
}

int main(){
    printf("%lld\n", thirt(987654321));
}
