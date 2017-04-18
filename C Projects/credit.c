// using Luhn's algorithm checks to see if a card is valid and which type of card it is
#include <stdio.h>
#include <cs50.h>
#include <string.h>

int main(void) {
    long long n;
    do {
        printf("Number: ");
        n = get_long_long();
    } while (n <= 0);
    int num[20];
    int length = 0;
    for (int i = 0; i < 20; i++) {
        if (n == 0) {
            break;
        } else {
            num[i] = n%10;
            n = n/10;
            length++;
        }
    } 
    
    int checksum = 0;
    for (int i = 1; i <= length-1; i=i+2) {
        if (num[i]*2>9) {
            int temp = num[i]*2;
            checksum += temp%10;
            
            temp/=10;
            checksum += temp%10;
            
        } else {
            checksum += num[i]*2;
            
        }
    }
    for (int i = 0; i <= length-1; i=i+2) {
        checksum += num[i];
        
    }
    
    if (checksum%10 != 0) {
        printf("INVALID\n");
        return 0;
    } 
    // check AMEX
    if (length == 15 && num[length-1] == 3) {
        if (num[length-2] == 4 || num[length-2] == 7) {
            printf("AMEX\n");
            return 0;
        } 
    }
    // check VISA
    if (length == 13 || length == 16) {
        if (num[length-1] == 4) {
            printf("VISA\n");
            return 0;
        }
    }
    
    // check MASTERCARD
    if (length == 16 && num[length-1] == 5) {
        if (num[length-2]<= 5) {
            printf("MASTERCARD\n");
            return 0;
        } 
    }
    else {
        printf("INVALID\n");
        return 0;
    }
}
