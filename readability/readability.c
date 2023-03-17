#include <cs50.h>
#include <stdio.h>
#include <string.h>
#include <math.h>

//Define prototypes
int count_letters(string text);
int count_words(string text);
int count_sentences(string text);

//Main function
int main(void)
{
    //Prompt the user for string
    string s = get_string("Text: ");
    //Function to count the letters
    int a = count_letters(s);

    //Function to count the words
    int b = count_words(s);

    //Function to count the sentences
    int c = count_sentences(s);


    //Coleman-Liau index
    //L is the average number of letters per 100 words in the text.
    float L = (float) a / (float) b * 100;

    //S is the average number of sentences per 100 words in the text.
    float S = (float) c / (float) b * 100;

    //The equation
    float result = 0.0588 * L - 0.296 * S - 15.8;


    //Condition
    if (result >= 16)
    {
        printf("Grade 16+\n");
    }
    else if (result < 1)
    {
        printf("Before Grade 1\n");
    }
    else
    {
        printf("Grade %i\n", (int) round(result));
    }

}

//Define functions
int count_letters(string text)
{
    int sum = 0;
    for (int i = 0, n = strlen(text); i < n; i++)
    {
        if (text[i] >= 'a' && text[i] <= 'z')
        {
            sum++;
        }
        else if (text[i] >= 'A' && text[i] <= 'Z')
        {
            sum++;
        }
        else
        {
            sum = sum + 0;
        }
    }
    return sum;
}

int count_words(string text)
{
    int sum = 1;
    for (int i = 0, n = strlen(text); i < n; i++)
    {
        if (text[i] == ' ')
        {
            sum++;
        }
    }
    return sum;
}

int count_sentences(string text)
{
    int sum = 0;
    for (int i = 0, n = strlen(text); i < n; i++)
    {
        if (text[i] == '.')
        {
            sum++;
        }
        else if (text[i] == '!')
        {
            sum++;
        }
        else if (text[i] == '?')
        {
            sum++;
        }
        else
        {
            sum = sum + 0;
        }
    }
    return sum;
}
