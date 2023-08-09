#include <stdio.h>
#include <cs50.h>
#include <ctype.h>
#include <string.h>


int main(int argc, string argv[])
{
    string k = argv[1];
    if(argc == 2 && strlen (k) == 26)
    {
        printf("success\n");
    }
    else
    {
        printf("Usage: ./substitution key\n");
        return 1;
    }
    for (int i = 0, n = strlen(argv[1]); i < n; i++)
    {

        if( (argv[1][i] >= 'A'  && argv[1][i] <= 'Z') || (argv[1][i] >= 'a' && argv[1][i] <= 'z'))
        {
            break;
        }

    }

        for (int l = 0; l < strlen (k); l++)
        {
            for ( int j = l+1; j < strlen (k); j++)
            {
                if (toupper(k[l]) == toupper(k[j]))
                {
                    return 1;
                }
            }
        }
    printf("Enter plaintext : ");
    string plaintext = get_string("");
    int key = 0;
    for(int m = 0; m < strlen (k) ; m++)
    {
        if (isupper(k[m]))
        {
            key = k[m] - 'A';
        }
        if (islower(k[m]))
        {
            key = k[m] - 'a';
        }
    }
    int h = strlen (plaintext);
    char cipher[h];
    for(int n = 0; n < h; n++)
    {
        if (plaintext[n] != ',' && plaintext[n] != ' ' && plaintext[n] != '!')
            {
                if (isupper(plaintext[n]))
                {
                    int a = (plaintext[n] - 'A') ;

                    cipher[n] = toupper(argv[1][a]);
                }
                if (islower(plaintext[n]))
                {
                    int b = (plaintext[n] - 'a') ;

                    cipher[n] = tolower(argv[1][b]);
                }
                else
                {
                    cipher[n] = plaintext[n];
                }
            }
            printf("%c", cipher[n]);
    }
}
