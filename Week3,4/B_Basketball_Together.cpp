#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

int main() {
    ll n,d;cin>>n>>d;
    ll a[n], b[n];
    for (ll i=0;i<n;i++) {
        cin>>a[i];
        b[i]=(d/a[i])+1;
    }
    sort(b,b+n);
    ll count=0; ll ans=0;
    for (ll i=0;i<n;i++) {
        count+=b[i];
        if (count<=n) {
            ans++;
        }
        else {
            break;
        }
    }
    cout<<ans<<endl;
}
