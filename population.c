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
    while (n < 9);
    // TODO: Prompt for end size
    int ni;
    do
    {
        ni = get_int("What is the final population size? ");
		}
    while (ni < n);
    // TODO: Calculate number of years until we reach threshold
    int years = 0;
    while (n < ni)
    {
        n = n + (n/3) - (n/4);
        years++;
		}
    // TODO: Print number of years
    printf("Years: %i\n", years);
}