#include <stdio.h>
// generates a factorial table from 1-10 using a recursive function

long long factorial(int n);

int main(void){
    printf("if n is...\t\t the factorial is...\n");

    for (int i = 1; i <= 10; i++) {
        printf("\t%d\t\t\t%lli\n", i, factorial(i));
    }

    return 0;
}

long long factorial(int n) {
    int sum;
    if (n >= 1) {
        return n*factorial(n-1);
    } else {
    return 1;
    }
}
