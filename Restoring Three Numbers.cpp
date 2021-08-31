#include<iostream>
#include<algorithm>

using namespace std;

int main()
{
    int Array[4];

    for(int i=0; i<4; i++)
    {
        cin>>Array[i];
    }
    sort(Array,Array+4);

    int c = Array[3] - Array[0];
    int b = Array[2] - c;
    int a = Array[3] - (b+c);
    cout<<a<<" "<<b<<" "<<c;
}
