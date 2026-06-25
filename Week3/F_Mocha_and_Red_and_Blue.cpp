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
        
        int start_idx = -1;
        for (int i = 0; i < n; i++) {
            if (s[i] != '?') {
                start_idx = i;
                break;
            }
        }
        
        if (start_idx == -1) {
            s[0] = 'B';
            start_idx = 0;
        }
        
        for (int i = start_idx - 1; i >= 0; i--) {
            if (s[i + 1] == 'B') s[i] = 'R';
            else s[i] = 'B';
        }
        
        for (int i = start_idx + 1; i < n; i++) {
            if (s[i] == '?') {
                if (s[i - 1] == 'B') s[i] = 'R';
                else s[i] = 'B';
            }
        }
        
        cout << s << "\n";
    }
    return 0;
}
