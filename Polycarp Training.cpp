#include<iostream>
#include<algorithm>

using namespace std;

void Merge_Sort(int low, int mid, int high, int a[], int n)
{
    int i1, i2, i, b[n];

    for(i1 = low, i2 = mid + 1, i = low; i1 <= mid && i2 <= high; i++)
    {
        if(a[i1] <= a[i2])
        {
            b[i] = a[i1++];
        }
        else
        {
            b[i] = a[i2++];
        }
    }

    while(i1 <= mid)
    {
        b[i++] = a[i1++];
    }

    while(i2 <= high)
    {
        b[i++] = a[i2++];
    }

    for(i = low; i <= high; i++)
    {
        a[i] = b[i];
    }
}

void Sort(int arr[], int low, int high)
{
    int mid, n=high+1;

    if(low < high)
    {
        mid = (low + high) / 2;
        Sort(arr, low, mid);
        Sort(arr, mid+1, high);

        Merge_Sort(low, mid, high, arr, n);
    }
    else
    {
        return;
    }
}

int main()
{
    int n, d=0, i, m=1;

    cin>>n;
    int arr[n];

    for(i=0; i<n; i++)
    {
        cin>>arr[i];
    }

    Sort(arr, 0, n-1);

    for(i=0; i<n; i++)
    {
        if(arr[i] >= m)
        {
            m++;
            d++;
        }
    }
    cout<< d<<endl;

    return 0;
}
