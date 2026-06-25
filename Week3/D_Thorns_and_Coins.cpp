#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        string s;
        cin >> s;
        
        int coins = 0;
        for (int i = 0; i < n; i++) {
            if (i < n - 1 && s[i] == '*' && s[i + 1] == '*') {
                break;
            }
            if (s[i] == '@') {
                coins++;
            }
        }
        cout << coins << "\n";
    }
    return 0;
}
