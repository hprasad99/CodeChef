/*  https://www.codechef.com/problems/FLOW008   */
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    if (t > 1000)
    {
        return 0;
    }
    int n;
    while (t--)
    {
        cin >> n;
        if (n < -20 || n > 20)
        {
            return 0;
        }
        if (n < 10)
        {
            cout << "Thanks for helping Chef!"
                 << "\n";
        }
        else
        {
            cout << "-1"
                 << "\n";
        }
    }
    return 0;
}