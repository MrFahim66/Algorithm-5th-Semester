#include<iostream>
#include<bits/stdc++.h>
#include<vector>

using namespace std;

int main(void)
{
    int T, C =1;
    cin>>T;

    while(T--)
    {
        int i,N;
        cin>>N;

        vector<char> Long_Field(N+2, '#');

        for(i = 0; i<N ; i++)
        {
            cin>>Long_Field[i];
        }

        int num_sCrows =0;

        for(i = 0; i<N ; i++)
        {
            if(Long_Field[i] == '.')
            {
                Long_Field[i] = Long_Field[i+1] = Long_Field[i+2] = '#';
                num_sCrows++;
            }
        }

        cout<<"Case "<<C++<<": "<<num_sCrows<<endl;
    }

    return 0;
}
