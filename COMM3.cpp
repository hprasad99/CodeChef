//https://www.codechef.com/problems/COMM3
#include <bits/stdc++.h>
using namespace std;
bool close(int x, int y, int r)
{
    return (x * x + y * y) <= r * r;
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int r, cnt = 0, a, b, c, d, e, f;
        cin >> r >> a >> b >> c >> d >> e >> f;
        if (close(a - c, b - d, r))
            ++cnt;
        if (close(a - e, b - f, r))
            ++cnt;
        if (close(c - e, d - f, r))
            ++cnt;
        if (cnt > 1)
            cout << "yes"
                 << "\n";
        else
            cout << "no"
                 << "\n";
    }
    return 0;
}