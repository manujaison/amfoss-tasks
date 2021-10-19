include <stdio.h>
#include <cs50.h>
#include <string.h>

#define MAX 9

typedef struct
{
    string name;
    int votes;
}
candidate;

candidate candidates[MAX];

int main(int argc, string argv[])
{    
    if (argc<2)
    { 
        printf("usage: ./plurality [candidates]\n");
        return 1;
    }
    int candidatec=argc-1;
    if(candidatec>MAX)
    {
        printf("Maximum number of candidates is: %i\n",MAX);
        return 2;
    }
    for (int i=0;i<candidatec;i++)
    {
        candidates[i].name=argv[i+1];
        candidates[i].votes=0;
    }
    int voterc=get_int("Number of voters:");
    for (int i=0;i<voterc;i++)
    {
        string name=get_string("Vote:");
        if(strcmp(candidates[i].name,name)==0)
        {
            candidates[i].votes++;
        }
    }   
    int maxvotes=0;
    for (int i=0;i<voterc;i++)
    {
        if (candidates[i].votes>maxvotes)
        {
            maxvotes=candidates[i].votes;
        }
    }
    for (int i=0;i<voterc;i++)
    {
        if (candidates[i].votes==maxvotes)
        {
            printf("%s\n",candidates[i].name);
        }
    }
}
