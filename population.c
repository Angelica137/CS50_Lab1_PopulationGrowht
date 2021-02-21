#include <cs50.h>
#include <stdio.h>

int main(void)
{
    // TODO: Prompt for start size
    int n;
    do
    {
        n = get_int("What is the starting population? ");
		}
    while (n < 1);
    // TODO: Prompt for end size
    int ni;
    do
    {
        ni = get_int("What is the final population size? ");
		}
    while (ni < 9);
    // TODO: Calculate number of years until we reach threshold

    // TODO: Print number of years
}