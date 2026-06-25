#include<bits/stdc++.h>
using namespace std;

int main() {
    long long a,b,c,d;cin>>a>>b>>c>>d;
    if (a==d) {
        if (c>=1) {
            if (a>=1) cout<<1<<endl;
            else cout<<0<<endl;
        }
        else cout<<1<<endl;
    }
    else cout<<0<<endl;
}
