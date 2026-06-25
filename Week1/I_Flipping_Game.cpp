#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    
    if (cin >> n) {
        vector<int> a(n);
        int total_ones = 0;
        
        for (int i = 0; i < n; i++) {
            cin >> a[i];
            if (a[i] == 1) {
                total_ones++;
            }
        }
        
        int max_gain = -1000000;
        int current_gain = 0;
        
        for (int i = 0; i < n; i++) {
            int gain = (a[i] == 0) ? 1 : -1;
            current_gain = max(gain, current_gain + gain);
            max_gain = max(max_gain, current_gain);
        }
        
        cout << total_ones + max_gain << "\n";
    }
    
    return 0;
}
