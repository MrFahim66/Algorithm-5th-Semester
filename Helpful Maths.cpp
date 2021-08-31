#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
    int Array[1001];
    string s;
    cin>>s;

    int count=0;

    for(int i=0; i<s.size(); i++)
    {
        if(s[i]=='+')
        {
            continue;
        }
        else
        {
            Array[count++]=s[i]-'0';
        }
    }

    sort(Array,Array+count);

    for(int i=0; i<count; i++)
    {
        cout<<Array[i];
        if(i==count-1)
        {
            break;
        }
        cout<<"+";
    }
    return 0;
}
