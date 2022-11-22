#include <cs50.h>
#include <stdio.h>
#include <string.h>
#include <math.h>

int main(void)
{
    // Prompt user
    string text = get_string("Text: ");
    // Count the numbers of letters in text
    int letters = 0;
    for(int i = 0; i < strlen(text); i++)
    {
        if((text[i] >= 'a' && text[i] <= 'z') ||
            (text[i] >= 'A' && text[i] <= 'Z'))
        letters++;
    }
    // Count the numbers of words
    int words = 1;
    for(int i = 0; i <strlen(text); i++)
    {
        if(text[i] == ' ')
         words++;
    }
    // Count the numbers of sentences
    int sentences = 0;
    for(int i = 0; i < strlen(text); i++)
    {
        if(text[i] == '.' || text[i] == '?' ||
            text[i] == '?')
           sentences++;
    }
    // Use Coleman-liau index
    float calculation = (0.0588 * letters / words *
    100) - (0.296 * sentences / words * 100) - 15.8;
    int index = round(calculation);

    if (index < 1)
    {
        printf("Before Grade 1\n");
        return 0;
    }
    else if (index >= 16)
    {
        printf("Grade 16+\n");
        return 0;
    }
    else
    {
        printf("Grade %i\n", index);
    }
}
