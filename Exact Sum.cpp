#include <iostream>
#include <cstring>
#include <algorithm>
#include <cmath>

using namespace std;

int main(void)
{
    int n, book_Cost, i;

    while(cin>>n)
    {
        int A[n+10], X=0, Ans1, Ans2;
        for(i = 0; i<n; i++)
        {
            cin>>A[i];
        }
        cin>>book_Cost;

        sort(A, A+n);
        for(i = 0; i<n; i++)
        {
            X = book_Cost - A[i];
            X = lower_bound(A+i, A+n,X)-A;
            if(A[i]+A[X]== book_Cost)
            {
                Ans1 = A[i];
                Ans2 = A[X];
            }
        }
        cout<<"Peter should buy books whose prices are "<<Ans1<<" and "<<Ans2<<".\n"<<endl;
    }
    return 0;
}
