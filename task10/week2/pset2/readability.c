#include <cs50.h>
#include <stdio.h>
#include <ctype.h>
#include <string.h>
#include <math.h>
int main(void)
{
    string text=get_string("Text:");
    int l=0;
    int w=0;
    int s=0;

    for(int i=0,n=strlen(text);i<n;i++)
    {
        char c=text[i];
        if (isalpha(c)!=0)
        {
            l++;
        }
        if (c==' ')
        {
            w++;
        }
        if (c=='.'||c=='?'||c=='!')
        {
            s++;
        }
     }
     w++;
    float L=((float)l/(float)w)*100;
    float S=((float)s/(float)w)*100;
    int index=round(0.0588*L-0.296*S-15.8);
    if (index>16)
    {
        printf("Grade 16+\n");
    }
    if (index<1)
   {
        printf("Before Grade 1\n");
    }
    else
    {
        printf("Grade %i\n",index);
    }
}
