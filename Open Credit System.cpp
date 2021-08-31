#include <iostream>
#include <cstring>
#include <algorithm>
#include <cmath>

using namespace std;

int main(void)
{
    int T,i,n;

    cin>>T && T<20;
    while(T--)
    {
        cin>>n;
        int Array1[n];

        for(i=0; i<n; i++)
        {
            int cnt=0;
            cin>>Array1[i];
        }

        int maxDiff = numeric_limits<int>::min();

        int x= Array1[0];
        for(i=1; i<n; i++)
        {
            maxDiff = max(maxDiff, x - Array1[i]);
            x = max(x, Array1[i]);
        }
        cout<<maxDiff<<"\n";
    }
    return 0;
}
