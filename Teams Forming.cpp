#include<iostream>
#include<bits/stdc++.h>

using namespace std;

int bubble_Sort(int arr[], int n)
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
    int i, n;

    cin>>n;
    int Array[n];

    for(i=0; i<n; i++)
    {
        cin>>Array[i];
    }

    bubble_Sort(Array, n);

    int counter = 0;

    for(i=0; i<n; i+=2)
    {
        counter += (Array[i] - Array[i+1]);
    }

    cout<<counter<<endl;
}
