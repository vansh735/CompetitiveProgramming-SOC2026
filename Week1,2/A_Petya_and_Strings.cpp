#include<bits/stdc++.h>
using namespace std;

int main() {
    string a,b;cin>>a>>b;
    int i=0;
    for (;i<min(a.length(),b.length());i++) {
        if (a[i]!=b[i]||abs(a[i]-b[i])!=32) {
            if (a[i]>64&&a[i]<91) a[i]+=32;
            if (b[i]>64&&b[i]<91) b[i]+=32;
            if (a[i]>b[i]) {cout<<1<<endl;break;}
            else if (a[i]<b[i]) {cout<<-1<<endl;break;}
        }
    }
    if (i==min(a.length(),b.length())) cout<<0<<endl;
}
