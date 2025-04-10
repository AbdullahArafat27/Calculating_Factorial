#include <stdio.h>
long long unsigned factorial(unsigned n){

    long long unsigned result = 1;
    int i;

    for (i = 1; i <= n; ++i)
        result = result * i;
        return result;
}

int main(void){
    printf("%d\n", factorial(10));
    return 0;
}