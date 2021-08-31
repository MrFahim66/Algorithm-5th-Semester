#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

const int N=1e5+5;

int main()
{
    int t, n, q;

    scanf("%d",&t);
    for(int i=1; i<=t; i++)
    {
        scanf("%d%d",&n,&q);
        vector<int> v(n);
        for(int j=0; j<n; j++)
        {
            scanf("%d",&v[j]);
        }

        printf("Case %d:\n",i);

        for(int j=0; j<q; j++)
        {
            int x, y;
            scanf("%d%d",&x,&y);

            int Lower_Bound = lower_bound(v.begin(), v.end(),x) - v.begin();
            int Upper_Bound = upper_bound(v.begin(), v.end(),y) - v.begin();

            printf("%d\n",Upper_Bound - Lower_Bound);
        }
        v.clear();
    }
}
