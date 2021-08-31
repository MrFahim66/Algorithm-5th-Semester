#include<bits/stdc++.h>
#include <iostream>
#include <algorithm>
#include <cmath>

using namespace std;

int n,m,Vessel[1005];

bool is_Possible(int capacity)
{
    int Temp;
    int Counter = 1;

    Temp=0;
    for(int i=0; i<n; i++)
    {
        if( Temp + Vessel[i] <= capacity )
        {
            Temp = Temp + Vessel[i];
        }
        else
        {
            Temp = Vessel[i];
            Counter++;
        }
    }

    if(Counter > m)
    {
        return false;
    }
    else
    {
        return true;
    }
}

int BinarySearch(long long total,int maxCapacity)
{
    int low, mid, Answer;
    long long high;

    low = maxCapacity;
    high = total;

    while(low <= high)
    {
        mid = (low + high)/2;

        if(is_Possible(mid))
        {
            Answer = mid;
            high = mid-1;
        }

        else
        {
            low = mid+1;
        }
    }
    return Answer;
}

int main()
{
    int Test_Case,k,Result;
    long long low,total;
    cin>>Test_Case;

    for(k=1; k <= Test_Case; k++)
    {
        cin>>n>>m;
        total = low = 0;
        for(int i=0; i<n; i++)
        {
            cin>>Vessel[i];

            total += Vessel[i];

            if(Vessel[i]>low)
            {
                low=Vessel[i];
            }
        }

        Result = BinarySearch(total,low);
        cout<<"Case "<<k<<": "<<Result<<endl;
    }
}

