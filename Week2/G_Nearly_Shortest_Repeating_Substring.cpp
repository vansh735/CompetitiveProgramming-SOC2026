#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

int main() {
    ll t;cin>>t;
    while(t--) {
        ll n;cin>>n;
        string s;cin>>s;
        
        for (ll d=1;d<=n;d++) {
            if (n%d==0) {
                ll diff1=0;
                for (ll i=0;i<n;i++) {
                    if (s[i]!=s[i%d]) {
                        diff1++;
                    }
                }
                if (diff1<=1) {
                    cout<<d<<endl;
                    break;
                }
                
                ll diff2=0;
                for (ll i=0;i<n;i++) {
                    if (s[i]!=s[n-d+(i%d)]) {
                        diff2++;
                    }
                }
                if (diff2<=1) {
                    cout<<d<<endl;
                    break;
                }
            }
        }
    }
}
