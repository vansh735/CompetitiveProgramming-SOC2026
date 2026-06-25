#include<bits/stdc++.h>
using namespace std;

int main() {
    long long n;cin>>n;
    long long noOf4=0;long long noOf7=0;
    for (long long i=0;i<=n/7;i++) {
        for(long long j=0;j<=n/4;j++) {
            if (n==(4*j)+(7*i)) {
                noOf4=j;
                noOf7=i;
                break;
            }
        }
        if (noOf4!=0&&noOf7!=0) break;
    }
    if (noOf4==0&&noOf7==0) {cout<<-1<<endl;}
    else {
        long long noOfDigits=noOf4+noOf7;
        string s;
        for (int i=0;i<noOf4;i++) s+='4';
        for (int i=0;i<noOf7;i++) s+='7';
        cout<<s<<endl;
    }

}
