#include <cs50.h>
#include <stdio.h>
#include <math.h>

// Computes the minimum number of U.S. coins needed for a cash-change amount.
int main(void)

{
    float change;
    do
    {
        change = get_float("Change owed: ");
    }
    while (change < 0);
    
    int cents = round(change*100);
    
    int coins = 0;
    while (cents != 0)
    {
        if (cents >= 25)
        {
            cents = cents - 25;
        }
        else if (cents >= 10)
        {
            cents = cents - 10;
        }
        else if (cents >= 5)
        {
            cents = cents - 5;
        }
        else if (cents >= 1)
        {
            cents = cents - 1;
        }
        coins++;
    }
    
    printf("%i\n", coins);
    
}
