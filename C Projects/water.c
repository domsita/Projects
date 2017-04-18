// This program asks a user how long their shower was and converts the length in minutes to bottles of water

#include <cs50.h>
#include <stdio.h>

int main(void)
{
    printf("Length of shower in minutes: ");
    int minutes = get_int();
    printf("Minutes: %i\n", minutes);
    printf("Bottles: %i\n", minutes * 192 / 16);
}

