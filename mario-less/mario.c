#include <cs50.h>
#include <stdio.h>

int main(void)
{
    //Code to receive height from the user with user validation.
    int n;
    do
    {
        n = get_int("Enter height: ");
    }
    while (n < 1 || n > 8);

    //Code for pyramid

    //for rows
    for (int i = 0; i < n; i++)
    {
        //for columns
        for (int j = 0; j < n; j++)
        {
            if (i + j < n - 1)
            {
                printf(" ");
            }
            else
            {
                printf("#");
            }
        }
        printf("\n");
    }
}