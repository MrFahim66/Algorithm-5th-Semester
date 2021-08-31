#include <bits/stdc++.h>

using namespace std;

const int mx = 100000;

bool max_possible(int& a, const int& b)
{
    return a < b ? a = b, 1 : 0;
}

int dp[mx][3];

int main()
{
    int N;
    cin >> N;

    for(int i = 1; i <= N; ++i)
    {
        int a, b, c;
        cin >> a >> b >> c;
        max_possible(dp[i][0], max(dp[i - 1][1] + b, dp[i - 1][2] + c));
        max_possible(dp[i][1], max(dp[i - 1][0] + a, dp[i - 1][2] + c));
        max_possible(dp[i][2], max(dp[i - 1][0] + a, dp[i - 1][1] + b));
    }

    cout << max(dp[N][0], max(dp[N][1], dp[N][2])) << endl;
}
