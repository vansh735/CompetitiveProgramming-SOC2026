#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int odd_max = 0, even_max = 0;
        int odd_count = 0, even_count = 0;

        for (int i = 1; i <= n; i++) {
            int a;
            cin >> a;
            if (i % 2 != 0) {
                odd_max = max(odd_max, a);
                odd_count++;
            } else {
                even_max = max(even_max, a);
                even_count++;
            }
        }

        cout << max(odd_max + odd_count, even_max + even_count) << "\n";
    }
    return 0;
}
