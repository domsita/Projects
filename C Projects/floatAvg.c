#include <stdio.h>
// finds the average of an array of 10 floats

int main(void) {
    float farr[] = {3.1, .42, .59, 5.734, 7.5, 19.234, 9, 8.3, 1.2, .9};
    float sum = 0.0;
    for (int i = 0; i < 10; i++) {
        sum = sum + farr[i];
    }
    float avg = sum/10.0;
    printf(" %f", avg);

}
