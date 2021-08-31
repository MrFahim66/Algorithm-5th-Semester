#include<iostream>
#include<bits/stdc++.h>

using namespace std;

int main(void)
{
    long long s,x;

    cin>>s>>x;

    long long Answer = 0;

    while(s!=0)
    {
        s /= x;
        Answer++;
    }

    cout<<Answer;
}
