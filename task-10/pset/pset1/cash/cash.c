#include <stdio.h>
#include <math.h>
#include <cs50.h>

int main(void)
{
    float cng;
    int c=0;
    do
    { 
        cng=get_float("Change owed:");
    }
    while (cng<0);
    int cent=round(change*100);
    
    while (cent>=25)
    {
        cent=cent-25;
        c++;
    }
    while (cent>=10)
    {
        cent=cent-10;
        c++;
    }
    while (cent>=5)
    {
        cent=cent-5;
        c++;
    }
    while (cent>=1)
    {
        cent=cent-1;
        c++;
    }
    printf("%i\n",count);
}
