#include <iostream>
#include<algorithm>

using namespace std;

const int MX = 100000;

int A[MX], Dynamic_Program[MX];

int main()
{
    int N;
    cin >> N;

    for(int i = 0; i < N; ++i)
    {
        cin >> A[i];
        Dynamic_Program[i] = 1000000000;
    }

    Dynamic_Program[0] = 0;

    for(int i = 0; i < N; ++i)
    {
        if(i + 1 < N)
        {
            Dynamic_Program[i + 1] = min(Dynamic_Program[i + 1], Dynamic_Program[i] + abs(A[i] - A[i + 1]));
        }
        if(i + 2 < N)
        {
            Dynamic_Program[i + 2] = min(Dynamic_Program[i + 2], Dynamic_Program[i] + abs(A[i] - A[i + 2]));
        }
    }

    cout << Dynamic_Program[N - 1] << endl;

    return 0;
}
