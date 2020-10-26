#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    while (1)
    {
        cin >> n;
        if (n > 0)
        {
            int flag = 1, p[n], ip[n];
            for (int i = 0; i < n; i++)
                cin >> p[i];
            for (int i = 0; i < n; i++)
                ip[p[i] - 1] = i + 1;
            for (int i = 0; i < n; i++)
            {
                if (p[i] != ip[i])
                {
                    flag = 0;
                    break;
                }
            }
            if (flag == 1)
                cout << "ambiguous\n";
            else
                cout << "not ambiguous\n";
        }
        else
            break;
    }

    return 0;
}
