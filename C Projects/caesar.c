#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <cs50.h>

int main(int argc, string argv[]) {
    // check for proper input
    if (argc != 2 && !isdigit(argv[1])) {
        printf("Invalid input");
        return 1;
    }
    
    // ensures k is between 1-25
    int k = atoi(argv[1]);
    while (k >= 26) {
        k -= 26;
    }
    
    // get plaintext
    printf("plaintext: ");
    string plain = get_string();
    int plen = strlen(plain);
    
    //cipher output
    printf("ciphertext: ");
    for (int i = 0; i < plen; i++) {
        //resets the counter each char
        int ct = k;
        // loops through based on counter and wraps if necessary
        if (isupper(plain[i])) {
            while (ct != 0) {
                if (plain[i] == 'Z') {
                    plain[i] = 'A';
                    ct--;
                } else {
                    plain[i]++;
                    ct--;
                }
            } 
        } else if (islower(plain[i])) {
            while (ct != 0) {
                if (plain[i] == 'z') {
                    plain[i] = 'a';
                    ct--;
                } else {
                    plain[i]++;
                    ct--;
                }
            } 
        } else {
            continue;
        }
    }
    printf("%s\n", plain);
}
