#include <stdio.h>
// generates the factorial of an integer "n" using a recursive function

long long factorial(int n);

int main(void){
    int n;
    printf("Enter a positive integer: ");
    scanf("%d", &n);
    printf("Factorial of %d is %lli", n, factorial(n));
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
