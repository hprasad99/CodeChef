//https://www.codechef.com/IARCSJUD/problems/BOOKLIST
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int m, n;
    cin >> m;
    vector<int> vec;
    vector<int>::iterator it;
    for (int i = 0; i < m; i++)
    {
        int p;
        cin >> p;
        vec.push_back(p);
    }
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        int p;
        cin >> p;
        it = vec.begin() + p - 1;
        cout << *it << "\n";
        vec.erase(it);
    }
}