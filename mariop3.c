#include <stdio.h>
#include <cs50.h>


int main(void)
{
    int n = get_int("Size: ");
    if (n < 1)
    {
        n = get_int("Invalid Value. Size: ");
    }


    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            printf("#");
        }
        printf("\n");
    }
}