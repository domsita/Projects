// This program asks the user to provide a value and then builds the left-half of a right-aligned pyramid of that height.

#include <cs50.h>
#include <stdio.h>

void print();

int main(void)
{
    printf("How high should the pyramid be? ");
    int height = get_int();
    
    if (height > 24) 
    {
        printf("That's too high, how about a smaller pyramid? ");
    } 
    else if (height < 0) {
        printf("A pyramid that is %i high is technically a hole. \n", height);
    } 
    else 
    {
        print(height);
    }
}


void print(int n)
{   int i, j;
    for (i = 1; i <= n; i++)
    {    
        printf("%*s", n-i, ""); 
        for (j = 0; j < i; j++)
        {
              printf("%s","#");    
        }   
        printf("\n");  
    }   
}  
