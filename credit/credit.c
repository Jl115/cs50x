#include <cs50.h>
#include <stdio.h>

int main(void)
{
    long card;
    do
    {
        card = get_long("Caerd no: ");
    }
    while (card < 0); //Card nzûmber must be greater than 0
}