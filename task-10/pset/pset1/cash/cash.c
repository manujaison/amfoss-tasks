#include <stdio.h>
#include <math.h>
#include <cs50.h>

int main(void)
{
    int count=0;
    float change;
    do
    { 
        change=get_float("Change owed:");
    }
    while (change<0);
    int cent=round(change*100);
    
    while (cent>=25)
    {
        cent=cent-25;
        count++;
    }
    while (cent>=10)
    {
        cent=cent-10;
        count++;
    }
    while (cent>=5)
    {
        cent=cent-5;
        count++;
    }
    while (cent>=1)
    {
        cent=cent-1;
        count++;
    }
    printf("%i\n",count);
}
