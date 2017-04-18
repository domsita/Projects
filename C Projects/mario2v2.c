// another second crack at a problem that gave me a lot of trouble early on

#include <stdio.h>
#include <cs50.h>

void build(int x);

int main(void) {
    printf("on a scale of 1-23, how high should the pyramid be? ");
    int n = get_int();
    if (n < 0) {
        printf("A pyramid %d high is technically a hole...", n);
        printf("\nTry a number between 1 and 23? ");
        n = get_int();
    } else if (n > 23) {
        printf("\nLet's try a number between 1 and 23 first... Try again? ");
        n = get_int();
    }
    build(n);
}

void build(int n) {
    int y = n;
    for (int x = n; x > 0; x--) {
        
        for (int j = 0; j<=x-2; j++) {
            printf(" ");
        } for (int i = y-x; i >= 0; i--) {
            printf("#");
        } printf("  ");
        for (int k = y-x; k >= 0; k--) {
            printf("#");
        } for (int l = 0; l<=x-2; l++) {
            printf("");
        }
        printf("\n");
    }
}
