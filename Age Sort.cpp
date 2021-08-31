#include<iostream>

using namespace std;

long long int bubble_Sort(long long int Arr[], long long int n)
{
    int i,j;
    for(i = 1; i< n; i++)
    {
        for(j=0; j<n-i; j++)
        {
            if(Arr[j]>Arr[j+1])
            {
                long long int temp = Arr[j];
                Arr[j] = Arr[j+1];
                Arr[j+1] = temp;
            }
        }
    }
}

int main()
{
    long long int N;

    while(scanf("%lld", &N))
    {
        if(N == 0)
        {
            break;
        }

        long long int Array[N];

        for(int i = 0; i<N; i++)
        {
            scanf("%lld", &Array[i]);
        }
        bubble_Sort(Array,N);

        for(long long int i=0; i<N; i++)
        {
            printf("%lld ", Array[i]);
        }
        printf("\n");
    }

    return 0;
}
