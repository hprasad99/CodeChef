#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    string n;
    while (t--)
    {
        cin >> n;
        cout << count(n.begin(),n.end(),'4')<<"\n";
    }
    return 0;
}