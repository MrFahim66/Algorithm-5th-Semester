#include<iostream>

using namespace std;

int main(void)
{
    int i, Input_Array[100005], Array_Length[100005];
    int TestCase = 0;

    while(1)
    {
        int n= 0;

        while(cin>>Input_Array[n++])
        {
            if(Input_Array[n-1] == -1)
            {
                break;
            }
        }

        if(Input_Array[0] == -1)
        {
            break;
        }

        for(i= 0; i< 100005; i++)
        {
            Array_Length[i] = 1;
        }

        for (int i = 0; i < n-1; i++)
        {
            for (int j = 0; j < i; j++)
            {
                if (Input_Array[j] > Input_Array[i])
                {
                    Array_Length[i] = max(Array_Length[i], Array_Length[j] + 1);
                }
            }
        }

        int ans = 0;
        for(i=n-1; i>=0; i--)
        {
            ans = max(ans, Array_Length[i]);
        }

        if(TestCase)
        {
            cout<<""<<endl;
        }

        cout<<"Test #"<<++TestCase<<":"<<endl;
        cout<<"  maximum possible interceptions: "<<ans<<endl;
    }
}
