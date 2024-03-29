#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, p, q, i, j, p1, q1;
    p1 = p;
    cin >> n >> p;
    set<int> levels;
    while (p--)
    {
        cin >> i;
        levels.insert(i);
    }
    cin >> q;
    while (q--)
    {
        cin >> j;
        levels.insert(j);
    }
    //cout << levels.size();
    if (levels.size() == n)
    {
        cout << "I become the guy.";
    }
    else
    {
        cout << "Oh, my keyboard!";
    }
}