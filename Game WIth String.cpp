#include <iostream>
#include <cstring>
#include <algorithm>
#include <cmath>

using namespace std;

int main(void)
{
    int x=0;
    int i;
    string player;
    while(cin>>player)
    {
        int len = player.size();
        for(i= 0; i<len-1; i++)
        {
            if(player[i]== player[i+1])
            {
                ++x;
                player.erase(i,2);
                len = player.size();
                i = -1;
            }
        }
        if(x%2==1)
        {
            cout<<"Yes"<<endl;
        }
        else
        {
            cout<<"NO"<<endl;
        }
    }
    return 0;
}
