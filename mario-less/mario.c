#include <cs50.h>
#include <stdio.h>

int main(void)
{
    //Input of the height
    int n;
    do
    {
        n = get_int("Heigt: ");
    }
    while(n < 1 || n > 8);

    //desired pyramid height
    for (int i = 0; i < n; i++)
    {
        //perimeters for the colums to print
        for (int j = 0; j < n; j++)
    {
        if (i+j < n-1)
        printf(" ");
        else
        printf("#");
    }
    printf("\n");
    }
}