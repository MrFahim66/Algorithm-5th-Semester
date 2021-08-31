#include<iostream>
#include<string.h>

using namespace std;

string lexicographical_MaxString(string Str)
{
    string mx = "";
    for(int i =0; i< Str.length(); i++)
    {
        mx = max(mx, Str.substr(i));
    }

    return mx;
}

int main()
{
    string String1;

    cin>> String1;

    cout<< lexicographical_MaxString(String1)<<endl;
}
