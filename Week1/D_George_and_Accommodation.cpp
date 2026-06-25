#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n; cin>>n;
    int p[n], q[n];
    for (int i=0;i<n;i++) cin>>p[i]>>q[i];
    int count=0;
    for (int i=0;i<n;i++) {
        if (q[i]-p[i]>=2) count++;
    }
    cout<<count;
}
