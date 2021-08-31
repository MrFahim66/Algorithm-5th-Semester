#include <bits/stdc++.h>

using namespace std;

int calculate_minK(int arr[], int n)
{
    int K = 0, X, i;

    for(i=1; i<=n; i++)
    {
        if(arr[i]- arr[i-1]>K)
        {
            K = arr[i]- arr[i-1];
        }
    }
    X = K;

    for(i=1; i<=n; i++)
    {
        if(arr[i]- arr[i-1]==K)
        {
            K--;
        }
        else if(arr[i]- arr[i-1]>K)
        {
            X++;
            break;
        }
    }

    return X;
}

int main(void)
{
    int T, i;
    cin>>T;

    for(i=0; i<T; i++)
    {
        int n,j;
        cin>>n;
        int Array[100000];

        for(j=1; j<=n; j++)
        {
            cin>>Array[j];
        }

        int minK = calculate_minK(Array, n);

        cout<<"Case "<<i+1<<": "<<minK<<endl;
    }
}
