#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int mn_val = 200, mx_val = 0;
        int mn_idx = 0, mx_idx = 0;
        
        for (int i = 1; i <= n; i++) {
            int a;
            cin >> a;
            if (a < mn_val) {
                mn_val = a;
                mn_idx = i;
            }
            if (a > mx_val) {
                mx_val = a;
                mx_idx = i;
            }
        }
        
        int L = min(mn_idx, mx_idx);
        int R = max(mn_idx, mx_idx);
        
        cout << min({R, n - L + 1, L + (n - R + 1)}) << "\n";
    }
}
