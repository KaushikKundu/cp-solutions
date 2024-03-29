#include <bits/stdc++.h>
using namespace std;
int main(){
    int n, empty = 0, ans = 0;
    int t;
    cin >> t;
    while (t--){
        cin >> n;
        string s;
        cin >> s;
        for (char i = 0; i < n; i++){
            if (s[i] == '.'){
                empty++;
            }
            if(i <= n-3){
                if (s[i] == '.' && s[i+1] == '.' && s[i+2] == '.'){
                    ans = 2;
                }
            }
        }
            cout << ans << endl;
            ans = 0;
    }
}