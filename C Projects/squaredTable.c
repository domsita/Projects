#include <stdio.h>
// generates a table of n and n2 from 1 to 10

int main(void){
    printf("n\t");
    printf("n^2\n");
    for (int n = 1; n <= 10; n++){
        printf("%d\t", n);
        printf("%d\n", n*n);
    }
    return 0;
}
