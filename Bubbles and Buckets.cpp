#include<iostream>
#include<bits/stdc++.h>

using namespace std;

long long bubble_Sort(long long arr[], long long n)
{
    int i,j;
    for(i = 1; i< n; i++)
    {
        for(j=0; j<n-i; j++)
        {
            if(arr[j]<arr[j+1])
            {
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }
}

int main(void)
{
    long long n;
    while(1)
    {
        cin>>n;
        if(n==0)
        {
            return 0;
        }

        long long i;
        long long arr[n];
        for(i=0; i<n; i++)
        {
            cin>>arr[i];
        }

        long long answer;

        answer = bubble_Sort(arr, n);

        if(answer%2 == 1)
        {
            cout<<"Marcelo"<<endl;
        }
        else
        {
            cout<<"Carlos"<<endl;
        }

    }
}
