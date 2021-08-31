#include <iostream>
#include <cstring>
#include <algorithm>
#include <cmath>
#include <vector>

using namespace std;

int main(void)
{
    int testCase;
    cin >> testCase;
    while (testCase--)
    {
        int i;
        string S;
        cin>>S;
        vector<char> V;
        int length = S.size();
        for(i=0; i<length; i++)
        {
            char X = S[i];
            if(X=='1')
            {
                V.push_back(X);
            }
        }
        int numberOfOnes = V.size();

        int n= 0;
        for(char digit : S)
        {
            if(digit == '0')
            {
                if(n>0)
                {
                    break;
                }
            }
            else if(digit =='1' && n>=0)
            {
                n+=1;
            }
        }

        if (numberOfOnes !=0)
        {
            if(numberOfOnes != n)
            {
                cout<<"NO\n";
            }
            else
            {
                cout<<"YES\n";
            }
        }
        else{
            cout<<"NO\n";
        }
    }
}
