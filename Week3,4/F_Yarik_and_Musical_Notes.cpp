#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

int main() {
    ll t; cin >> t;
    while(t--) {
        ll n; cin >> n;
        vector<ll> a(n);
        map<ll, ll> freq;
        for (ll i = 0; i < n; i++) {
            cin >> a[i];
            freq[a[i]]++;
        }
        ll sum = 0;
        for (auto const& [key, val] : freq) {
            sum += (val * (val - 1)) / 2;
        }
        sum += freq[1] * freq[2];
        cout << sum << "\n";
    }
}
