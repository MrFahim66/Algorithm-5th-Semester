#include <iostream>
#include <cstring>
#include <algorithm>
#include <cmath>

using namespace std;

int main(void)
{
    int n, numberOfEights=0;
    string S;
    cin>>n>>S;

    int loopCount = n;
    while(loopCount--)
    {
        if(S[loopCount]=='8')
        {
            numberOfEights++;
        }
    }

    if(numberOfEights>=n/11)
    {
        cout<<n/11<<endl;
    }
    else if(numberOfEights<n/11 && n>11)
    {
        cout<<numberOfEights<<endl;
    }
    else
    {
        cout<<"0"<<endl;
    }

    return 0;
}
