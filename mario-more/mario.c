#include <cs50.h>
#include <stdio.h>

int main(void)
{
   //Get Input of the height
   int n;
   do
   {
       n = get_int("Heigt: ");
   }
   while(n < 1 || n > 8);

   //Print desired pyramid height
   for (int i = 0; i < n; i++)
   {
       //Set perimeters for the colums to print
       for (int j = 0; j < n+i+3; j++)
       {
           if (j == n || j == n+1 || i+j < n-1)
           printf(" ");
     else
           printf("#");
       }
       printf("\n");
    }
}