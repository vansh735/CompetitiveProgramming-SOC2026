#include<bits/stdc++.h>
using namespace std;

int main() {
    int n,t;cin>>n>>t;
    char q[n];
    for (int i=0;i<n;i++) cin>>q[i];
    for (int x=1;x<=t;x++) {
        for (int i=0;i<n-1;i++) {
            if (q[i]=='B'&&q[i+1]=='G') {
                char temp=q[i];
                q[i]=q[i+1];
                q[i+1]=temp;
                i++;
            }
        }
    }
    for (int i=0;i<n;i++) cout<<q[i];
}
