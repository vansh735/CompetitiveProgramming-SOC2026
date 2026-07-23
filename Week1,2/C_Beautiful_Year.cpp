#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n;cin>>n;
    n++;
    

    while (true) {
        int first = (n/1000);
        int second = (n/100)%10;
        int third = (n/10)%10;
        int fourth = n%10;
        if (((first != second) && (second != third) && (third != fourth) && (first != third) && (first != fourth) && (second != fourth))) {
            cout<<n;break;
        }
        n++;
    }
    
}
