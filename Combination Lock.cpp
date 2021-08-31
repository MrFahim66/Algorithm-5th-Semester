#include<iostream>
#include<algorithm>

using namespace std;

int main()
{
    int i,N;
    string String1, String2;

    cin>> N >> String1 >> String2;

    int Answer =0;

    for(i=0; i<N; i++)
    {
        Answer = Answer + min(10 - abs(String1[i] - String2[i]), abs(String1[i] - String2[i]));
    }

    cout<< Answer << endl;

    return 0;
}
