#include <stdio.h>
#include <cs50.h>

int main(void)
{
    int x = get_int("What's x? \n");
    int y = get_int("What's y? \n");

    if (x < y)
    {
        printf("x is less than y\n");
    }
    else if (x > y)
    {
        printf("x is not less than y\n");
    }
    else
    {
        printf("x is equal to y\n");
    }
}