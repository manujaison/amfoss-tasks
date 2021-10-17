#include <stdio.h>
#include <cs50.h>

int main(void)
{
    int n;
    do
    {
        n=get_int("Height:");
    }
    while (n<1 || n>8);
    
    for (int r=0;r<n;r++)
    {
        for (int s=n-r-1;s>0;s--)
        {
            printf(" ");
        }
        for (int h=0;h<r+1;h++)
        {
                printf("#");
        }
        printf("  ");
        for (int rh=0;rh<r+1;rh++)
        {
            printf("#");
        }
        printf("\n");
    }
}
