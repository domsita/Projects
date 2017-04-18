#include <stdio.h>
#include <cs50.h>
#include <ctype.h>
#include <math.h>

// checks the fewest amount of coins that can be given to make change for a given value
// This is my second crack at this problem after a bit more experience

int main(void) {
    printf("Change? ");
    float change = get_float();
    while (change <= 0) {
        printf("Please enter a non-negative value "); 
        change = get_float();
    }
    
    int coins = 0;
    int total = roundf(change*100);
    
    while (total >= 25) {
        total-=25;
        coins++;
    } 
    while (total >= 10) {
        total-=10;
        coins++;
    }
    while (total >= 5) {
        total-=5;
        coins++;
    }
    while (total >= 1) {
        total-=1;
        coins++;
    }
    printf("%d\n", coins);
    return 0;
}

