#include<iostream>

using namespace std;

int main(void)
{
    int i, j;
    long long int N,Capacity;

    cin>>N>>Capacity;

    long long int weight[N], value[N];
    weight[N] =0;
    value[N] =0;

    for(i=1;i<=N;i++)
    {
        cin>>weight[i]>>value[i];
    }

    long long int KnapSack[N+1][Capacity+1];

    for(i=0;i<=N;i++)
    {
        for(j=0;j<=Capacity;j++)
        {
            if( i==0 || j==0)
            {
                KnapSack[i][j]=0;
            }
            else if(weight[i] <= j)
            {
                KnapSack[i][j] = max(value[i] + KnapSack[i-1][j-weight[i]], KnapSack[i-1][j]);
            }
            else
            {
                KnapSack[i][j] = KnapSack[i-1][j];
            }
        }
    }

    cout<<KnapSack[N][Capacity];

    return 0;
}
