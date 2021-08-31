#include <iostream>
#include <cstring>
#include <algorithm>
#include <cmath>

using namespace std;

int main(void)
{
    int n=0;
    cin>>n;
    int A[n];
    for (int i=0; i<n; i++) { cin>>A[i]; }

    int Q;
    cin>>Q;

    while(Q--)
    {
        int h;
        cin>>h;

        int shorter=-1, taller=-1;
       	for (int i=0; i<n; i++)
        {
            if (A[i]<h) { shorter=A[i]; }
            if (A[i]>h) { taller = A[i]; break; }
       	}

        if (shorter==-1) { cout<<"X "; }
       	else { cout<<shorter<<" "; }

       	if (taller==-1) { cout<<"X"<<endl; }
       	else { cout<<taller<<endl; }
    }
    return 0;
 }
