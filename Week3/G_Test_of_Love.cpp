#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, m, k;
        cin >> n >> m >> k;
        string s;
        cin >> s;
        
        int pos = 0;
        bool possible = true;
        
        while (pos < n + 1) {
            if (pos == 0 || s[pos - 1] == 'L') {
                bool jumped = false;
                
                for (int i = min(n + 1, pos + m); i >= pos + 1; i--) {
                    if (i == n + 1 || s[i - 1] == 'L') {
                        pos = i;
                        jumped = true;
                        break;
                    }
                }
                
                if (!jumped) {
                    for (int i = min(n + 1, pos + m); i >= pos + 1; i--) {
                        if (i != n + 1 && s[i - 1] == 'W') {
                            pos = i;
                            jumped = true;
                            break;
                        }
                    }
                }
                
                if (!jumped) {
                    possible = false;
                    break;
                }
            } else if (s[pos - 1] == 'W') {
                pos++;
                k--;
                
                if (k < 0) {
                    possible = false;
                    break;
                }
                
                if (pos < n + 1 && s[pos - 1] == 'C') {
                    possible = false;
                    break;
                }
            }
        }
        
        if (possible) cout << "YES\n";
        else cout << "NO\n";
    }
    return 0;
}
