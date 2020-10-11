#include <bits/stdc++.h>
using namespace std;
int main()
{
    int count = 0,n;
    long int k, t;
    cin >> n >> k;
    while (n--)
    {
        cin >> t;
        if (t % k == 0 && k!=0)
        {
            count++;
        }
    }
    cout << count;
    return 0;
}