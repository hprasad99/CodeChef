//https://www.codechef.com/problems/RECIPE
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int a[n], sum = 0;
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        int temp;
        temp = a[0];
        for (int i = 0; i < n; i++)
        {
            int t = temp;
            while ((a[i] % t) || (temp % t))
            {
                t--;
            }
            temp = t;
        }
        for (int i = 0; i < n; i++)
        {
            cout << a[i] / temp << " ";
        }
        cout << "\n";
    }
    return 0;
}