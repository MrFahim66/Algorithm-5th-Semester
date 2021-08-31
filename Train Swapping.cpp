#include<iostream>
#include<bits/stdc++.h>

using namespace std;

int main(void)
{
    int i, n, length_Train, Array[50];
    cin>>n;

    while(n--)
    {
        cin>>length_Train;

        for(i=0; i<length_Train; i++)
        {
            cin>>Array[i];
        }
        int j,cnt=0;

        for(i = 0; i< length_Train; i++)
        {
            for(j=length_Train-1; j>i; j--)
            {
                if(Array[j]<Array[j-1])
                {
                    int temp = Array[j];
                    Array[j] = Array[j-1];
                    Array[j-1] = temp;
                    cnt++;
                }
            }
        }
        cout<<"Optimal train swapping takes "<<cnt<<" swaps."<<endl;
    }
    return 0;
}
