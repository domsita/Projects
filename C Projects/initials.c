#include <stdio.h>
#include <cs50.h>
#include <string.h>
#include <ctype.h>

//takes a name as user input and returns the initials

int main(void) {
    printf("Name: ");
    string name = get_string();
    int l  = strlen(name);
    
    for (int i = 0; i < l; i++) {
        if (isalpha(name[i]) && (i == 0 || name[i - 1] == ' ')) {
            printf("%c", toupper(name[i]));
        }
    }
    printf("\n");
    return 0;
}
