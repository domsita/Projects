#include <stdio.h>
#include <ctype.h>
#include <string.h>
#include <cs50.h>

// encrypts text via a keyword inputted at the command line

int main(int argc, string argv[]) {
    // improper command line argument
    if (argc != 2) {
        printf("Invalid input \n");
        return 1;
    }
    
    string k = argv[1];
    int klen = strlen(k);
    
    // iterates through the keyword to ensure there's no numbers/special chars
    for (int i = 0; i < klen; i++) {
        if (isalpha(k[i])) {
            continue;
        } else {
            printf("Invalid input \n");
            return 1;
        }
    }
    // creates an array of numbers to hold the values for the keyword
    int keyVals[klen];
    for (int j = 0; j < klen; j++) {
        if (isupper(k[j])) {
            keyVals[j] = (int) k[j] - 65;
        } else if (islower(k[j])) {
            keyVals[j] = (int) k[j] - 97;
        } 
    }
    
    // get text to encrypt
    printf("plaintext: ");
    string p = get_string();
    string c = p;
    int plen = strlen(p);
    
    // counter for position in key array
    int kcount = 0;
    
    //encrypt that text
    for (int i = 0; i < plen; i++) {
        // resets kcount if it's longer than the keyVals array
        if (kcount == klen) {
            kcount = 0;
        } 
        //upper case
        if (isupper(c[i])) {            
            int move = keyVals[kcount];     kcount++;
            while (move != 0) {
                if (c[i] == 'Z') {      c[i] = 'A';    move--;
                } else {                
                    c[i]++;         
                    move--;
                }
            }
        //lower case
        } else if (islower(c[i])) {     
            int move = keyVals[kcount];     kcount++;
            while (move != 0) { 
                if (c[i] == 'z') {      c[i] = 'a';    move--;
                } else {
                    c[i]++;
                    move--;
                }
            }   
        // skips chars and spaces        
        } else {
            continue;
        }
    }
    
    //output
    printf("ciphertext: %s\n", c);
    return 0;
}
