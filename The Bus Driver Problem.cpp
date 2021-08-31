#include<iostream>
#include<string>
#include<algorithm>

using namespace std;

int main()
{
    int n, d, r;
    int Hours, Morning[100], Afternoon[100];
    int Payment;

    while (cin>>n>>d>>r)
    {
        if(n==0 && d==0 && r==0)
        {
            break;
        }

        Payment = 0;

        for (int i = 0; i < n; i++)
        {
            cin>> Morning[i];
        }

        sort(Morning, Morning + n);

        for (int i = 0; i < n; i++)
        {
            cin>>Afternoon[i];
        }

        sort(Afternoon, Afternoon + n, greater<int>());

        for (int i = 0; i < n; i++)
        {
            Hours = Morning[i] + Afternoon[i];
            if (Hours > d)
            {
                Payment += (Hours - d) * r;
            }
        }

        cout<< Payment <<endl;
    }

    return 0;
}
