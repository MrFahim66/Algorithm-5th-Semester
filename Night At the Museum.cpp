#include<iostream>
#include<string.h>
#include<algorithm>

using namespace std;

int main()
{
    int i, Str_Length, Difference, Count =0;
    char String[100];

    cin>>String;

    Str_Length = strlen(String);

    Difference = abs(String[0] - 'a');

    if(Difference <=13)
    {
        Count+= Difference;
    }
    else
    {
        Count += (26-Difference);
    }

    for(i=0; i< Str_Length-1; i++)
    {
        Difference = abs(String[i] - String[i+1]);
        if(Difference <= 13)
        {
            Count+= Difference;
        }
        else
        {
            Count+=(26- Difference);
        }
    }

    cout<<Count;

    return 0;
}
