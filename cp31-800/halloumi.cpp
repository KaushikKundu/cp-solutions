#include <bits/stdc++.h>
using namespace std;

int main() {
    int t,n,k;
    cin >> t;
    while(t--){
    cin >> n >> k;
    vector<int> arr(n);
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
     
    // cout << k << endl;

    if(is_sorted(arr.begin(), arr.end()) || k >= 2)
        cout << "YES" << endl;
    else
        cout << "NO" << endl;
    }
}