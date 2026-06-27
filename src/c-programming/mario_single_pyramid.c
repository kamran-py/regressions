#include <cs50.h>
#include <stdio.h>

// Prints a right-aligned half-pyramid of hashes for a CS50-style Mario exercise.
int main(void)

{
    int height;
    do
    {
       height = get_int("Height: ");
    }
    while (height < 1 || height > 10);
    
    for (int i = 1; i <= height ; i++)
    {
        for (int s = 1; s <= height - i; s++)
        {
            printf(" ");
        }
        
        for (int h = 1; h <= i; h++)
        {
            printf("#");
        }
        
        printf("\n");
    
    }
}
