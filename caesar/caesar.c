//Header files
#include <stdio.h>
#include <cs50.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>

//Prototype
int cipher_text(string plain_text, int key);

//Main function
int main(int argc, string argv[])
{
    //Check that the user provided only one key or command line argument.
    if (argc != 2)
    {
        printf("Usage: ./caesar key\n");
        return 1;
    }

    //Check the key or command line argument is an integer.
    for (int i = 0; i < strlen(argv[1]); i++)
    {
        if (isdigit(argv[1][i]) == 0)
        {
            printf("Usage: ./caesar key\n");
            return 1;
        }
    }

    //KEY - Convert the string key to an integer.
    int key = atoi(argv[1]);

    //Prompt the user for the plain text.
    string plain_text = get_string("plaintext:  ");

    //Print the cipher text.
    printf("ciphertext: ");

    cipher_text(plain_text, key);
}





//Define function
int cipher_text(string plain_text, int key)
{
    for (int i = 0; i < strlen(plain_text); i++)
    {
        if (isupper(plain_text[i]) != 0)
        {
            printf("%c", (((plain_text[i] - 65) + key) % 26) + 65);
        }
        else if (islower(plain_text[i]) != 0)
        {
            printf("%c", (((plain_text[i] - 97) + key) % 26) + 97);
        }
        else
        {
            printf("%c", plain_text[i]);
        }
    }
    printf("\n");
    return 0;
}



