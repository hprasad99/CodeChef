#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, s, t, prev_s = 0, prev_t = 0;
    cin >> n;
    int max = 0, w = 1;
    while (n--)
    {
        cin >> s >> t;
        s += prev_s;
        t += prev_t;
        if (s > t)
        {
            if ((s - t) > max)
            {
                max = s - t;
                w = 1;
            }
        }
        else
        {
            if ((t - s) > max)
            {
                max = t - s;
                w = 2;
            }
        }
        prev_s = s;
        prev_t = t;
    }
    cout << w << " " << max;
    return 0;
}