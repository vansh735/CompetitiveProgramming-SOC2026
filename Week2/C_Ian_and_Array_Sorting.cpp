#include <bits/stdc++.h>
using namespace std;

int main() {
    
    long long t; 
    cin >> t;
    while(t--) {
        long long n;
        cin >> n;
        vector<long long> a(n);
        for(int i = 0; i < n; i++) {
            cin >> a[i];
        }
        
        if (n % 2 != 0) {
            cout << "YES\n";
        } else {
            long long sum = 0;
            for(int i = 0; i < n; i++) {
                if (i % 2 == 0) {
                    sum += a[i];
                } else {
                    sum -= a[i];
                }
            }
            if (sum <= 0) {
                cout << "YES\n";
            } else {
                cout << "NO\n";
            }
        }
    }
}
