#include <stdio.h>
// generates a table of n and the triangular number of n from 1 to 10

int main(void){
    printf("n\t");
    printf("n^2\n");
    for (int n = 1; n <= 10; n++){
        printf("%d\t", n);
        printf("%d\n", n*(n+1)/2);
    }

    return 0;
}
