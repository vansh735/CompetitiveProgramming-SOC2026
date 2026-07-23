#include<bits/stdc++.h>
using namespace std;

int main() {
    string s,t;cin>>s>>t;
    if (s.size()!=t.size()) cout<<"NO";
    else {
        int i=0;
        for (;i<s.size();i++) {
            if (s[i]!=t[s.size()-i-1]) break;
        }
        if (i==s.size()) cout<<"YES";
        else cout<<"NO";
    }
}
