#include <stdio.h>
#include <stdlib.h>
// finds the next multiple that two numbers have in common

int Next_multiple(i, j);

int main()
{
    int i1 = 365;
    int i2 = 12258;
    int i3 = 996;
    int j1 = 7;
    int j2 = 23;
    int j3 = 4;
    printf("%i\n", Next_multiple(i1,j1));
    printf("%i\n", Next_multiple(i2,j2));
    printf("%i\n", Next_multiple(i3,j3));
}

int Next_multiple(i, j) {
    return i + j - (i % j);
}
