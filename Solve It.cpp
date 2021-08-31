#include <iostream>
#include <algorithm>
#include <cmath>
#include <iomanip>

using namespace std;

double F(double x,double p,double q,double r,double s,double t,double u)
{
    return p * exp(-x) + q * sin(x) + r * cos(x) + s * tan(x) + t * x * x + u;
}

int main()
{
    double p, q, r, s, t, u;
    while (cin >> p >> q >> r >> s >> t >> u)
    {
        double U = 1.0, L = 0.0;

        while (U - L >= 1e-9)
        {
            double Mid = (L + U) / 2.0;
            double value = F(Mid, p, q, r, s, t, u);

            if (value < 0)
            {
                U = Mid;
            }

            else
            {
                L = Mid;
            }
        }

        if (abs(F((L + U) / 2, p, q, r, s, t, u)) <= 1e-4)
        {
            cout << setprecision(4)<< fixed << (L + U) / 2.0 << endl;
        }
        else
        {
            cout << "No solution" << endl;
        }
    }
    return 0;
}
