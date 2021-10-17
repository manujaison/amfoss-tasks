#include <cs50.h>
#include <string.h>
#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>

int main(int argc,string argv[])
{
    if (argc !=2)
    {
       printf("Usage: ./caeser key\n" );
       return 1;
    }
    else
    {
        string k=argv[1];
        for (int i=0,n=strlen(k);i<n;i++)
        {
            if (isdigit(k[i])==0)
            {
                printf("Usage: ./caeser key\n");
                return 1;
            }
        }
        string text=get_string("plaintext:");
        printf("Ciphertext:");
        for (int j=0,x=strlen(text);j<x;j++)
        {
            int add=atoi(argv[1]);
            if (isupper(text[j]))
            {
              printf("%c",(((text[j]-65)+add)%26)+65);

            }
            if (islower(text[j]))
            {
                printf("%c",(((text[j]-97)+add)%26)+97);
            }
            else
            {
                printf("%c",text[j]);
            }
        }
        printf("\n");
    }
}

