#include<iostream>
#include<bits/stdc++.h>

using namespace std;

int main(void)
{
    int n, k;

    while(cin>>n>>k)
    {
        int result = n+ (n-1) / (k-1);
        cout<<result<<endl;
    }
}
