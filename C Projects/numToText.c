#include <stdio.h>
// takes in a number and prints out each digit as text
void printChar(int x);

int main(void) {
    int n;
    int backNum[20];
    int num[20];
    int p1 = 0;
    int p2 = 0;
    int digits = 0;
    char redo;

    printf("\nPlease enter a number: ");
    scanf(" %i", &n);

    while(n > 0) {
        backNum[p1] = n % 10;
        p1++;
        n/=10;
        digits++;
    }

    while (p1 >= 0) {
        num[p2] = backNum[p1];
        p2++; p1--;
    }

    printf("\n");
    for (int i = 0; i <= digits; i++) {
        printChar(num[i]);
    }
    return 0;
}

void printChar(int x) {
    if      (x == 0)    printf("zero ");
    else if (x == 1)    printf("one ");
    else if (x == 2)    printf("two ");
    else if (x == 3)    printf("three ");
    else if (x == 4)    printf("four ");
    else if (x == 5)    printf("five ");
    else if (x == 6)    printf("six ");
    else if (x == 7)    printf("seven ");
    else if (x == 8)    printf("eight ");
    else if (x == 9)    printf("nine ");
    return;
}

