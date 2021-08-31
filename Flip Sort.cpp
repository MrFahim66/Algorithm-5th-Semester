#include<iostream>
#include<string>

using namespace std;

int bubble_Sort(int Arr[], int n)
{
    int i,j,Ans =0;
    for(i = 1; i< n; i++)
    {
        for(j=0; j<n-i; j++)
        {
            if(Arr[j]>Arr[j+1])
            {
                int temp = Arr[j];
                Arr[j] = Arr[j+1];
                Arr[j+1] = temp;
                Ans++;
            }
        }
    }
    return Ans;
}

int main()
{
    int N,Array[1000];

    while(cin>>N || N==1)
    {
        for(int i = 0; i<N; i++)
        {
            cin>>Array[i];
        }

        int Answer = bubble_Sort(Array,N);
        cout<<"Minimum exchange operations : "<<Answer<<endl;
    }

    return 0;
}
