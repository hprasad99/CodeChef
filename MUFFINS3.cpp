/*  https://www.codechef.com/problems/MUFFINS3 */
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t, n;
    cin >> t;
    while (t--)
    {
        cin >> n;
        if (n <= 2)
        {
            cout << n << "\n";
        }
        else
        {
            cout << n / 2 + 1 << "\n";
        }
    }
    return 0;
}
/* https://discuss.codechef.com/t/muffins3-editorial/1247 */