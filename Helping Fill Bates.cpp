#include<iostream>

using namespace std;

int main(void)
{
    int i,j,Loop_Control;
    string str1, str2;
    cin>>str1>>Loop_Control;
    while(Loop_Control--)
    {
        cin>>str2;

        int low = 2147483647, high = 0;

        for(i=0,j=0; str1[i]; i++)
        {
            if(str2[j] == str1[i])
            {
                low = min(low, i);
                high = max(high, i);
                str2.erase(0,1);
            }
        }

        if(str2.empty())
        {
            cout<<"Matched "<<low<<" "<<high<<endl;
        }
        else
        {
            cout<<"Not matched"<<endl;
        }
    }
    return 0;
}
