// a program that finds the fewest number of coins a cashier can provide to make correct change.
    // i.e. $.41 would be 4 coins (one of each) or $.50 would be 2 (two quarters)

#include <stdio.h>
#include <cs50.h>

float quarter = 0.25;
float dime = 0.10;
float nickel = 0.05;
float penny = 0.01;
int counter(float change, float coinValue);

int main(void)
{  
    printf("Hey there, how much change is owed? ");
    float input = get_float();
    
    while (input >= 1.00)                       // gets rid of dollars entered
    {
        input = input - 1;              
    } 
    
    
    float change = input;                       // value of just the coins
    
    int Q = counter(change, quarter);           // counts quarters
    change = change - (Q*quarter);              // creates new total without quarters
    
    int D = counter(change, dime);
    change = change - (D*dime);
    
    int N = counter(change, nickel);            // I'm storing totals for each coin individually because otherwise 
    change = change - (N*nickel);               // I couldn't figure out how to subtract them from the total after
                                                // they were counted. Perhaps there's a better way?
    int P = counter(change, penny);
    change = change - (P*penny);
    
    printf("%i\n", Q + D + N + P);
}

int counter(float change, float coinValue)          // two parameters (current total and value of coin)
{
    int count = 0;
    while (change >= coinValue) {                   // while the total is higher than the value of the coin
        change = change - coinValue;                // each pass through removes the coin value from the total
        count++;                                    // and adds one to the count
    } return count;
}
