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
        
        int x = 0;
        int first_one = s.find('1');
        
        if (first_one != string::npos) {
            for (int i = first_one + 1; i < n; i++) {
                if (x % 2 == 0) {
                    if (s[i] == '0') {
                        x++;
                    }
                } else {
                    if (s[i] == '1') {
                        x++;
                    }
                }
            }
        }
        
        cout << x << "\n";
    }
    return 0;
}
