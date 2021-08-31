#include<iostream>
#include<string.h>
#include<algorithm>

using namespace std;

int LCS[1001][1001];

int main()
{
    int n,m;
    string Str1,Str2;

    while(getline(cin,Str1))
    {
        getline(cin,Str2);

        n=Str1.size();
        m=Str2.size();

        for(int i=n; i>=0; i--)
        {
            for(int j=m; j>=0; j--)
            {
                if(i==n || j==m)
                {
                    LCS[i][j]=0;
                    continue;
                }
                if(Str1[i]==Str2[j]) LCS[i][j]=1+LCS[i+1][j+1];
                else LCS[i][j]=max(LCS[i+1][j],LCS[i][j+1]);
            }
        }

        cout<<LCS[0][0]<<endl;
    }

    return 0;
}
