#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t, n, x, v, gas1, gas2;
    cin >> t;
    while (t--)
    {
        cin >> n >> x;
        cin >> v;
        gas1 = v;
        for (int i = 1; i < n; i++)
        {
            cin >> gas2;
            v = max(gas2 - gas1,v);
            gas1 = gas2;
            
        }
       v = max(2 * (x - gas1),v);

        cout << v << endl;
    }
}