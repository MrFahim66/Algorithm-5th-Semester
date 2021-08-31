#include<iostream>
#include<algorithm>

using namespace std;

int main(void)
{
    int test;
    cin>>test;
    while(test--)
    {
        long long n, k, result=0;
        cin>>n>>k;

        while(n != 0)
        {
            if(n%k != 0)
            {
                result =+ n%k;
                n= n/k*k;
            }
            else
            {
                result++;
                n/=k;
            }
        }
        cout<< result <<endl;
    }

    return 0;
}
