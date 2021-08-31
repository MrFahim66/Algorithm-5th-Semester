#include <iostream>
#include <algorithm>
#include <cmath>

using namespace std;

int main(void)
{
    int Y, P, i, j, First_Year, Last_Year, Pope_Max;

    while(cin>> Y)
    {
        cin>>P;

        int Array[100000];

        for( i=0; i<P; i++)
        {
            cin>> Array[i];
        }

        Pope_Max = -1;

        for(i = 0; i<P; i++)
        {
            int c = 0;

            for(j=i; j<P && Array[j] < Array[i]+Y; j++)
            {
                c++;
            }

            if(c == Pope_Max)
            {
                continue;
            }
            else if(c > Pope_Max)
            {
                Pope_Max = c;
                First_Year = Array[i];
                Last_Year = Array[j-1];
            }
        }
        cout<< Pope_Max <<" " << First_Year <<" " << Last_Year << endl;
    }
    return 0;
}
