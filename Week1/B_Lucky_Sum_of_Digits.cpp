#include<bits/stdc++.h>
using namespace std;

int main() {
    int n;cin>>n;
    int noOf4=0;
    while(n>=0) {
        if (n%7==0) {
            int noOf7=n/7;
            for (int i=0;i<noOf4;i++) cout<<4;
            for (int i=0;i<noOf7;i++) cout<<7;
            cout<<endl;
            break;
        }
        noOf4++;
        n-=4;
    }
    if(n<0) cout<<-1<<endl;
}
