#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    
    int i = 1;
    while ((i * (i + 1)) / 2 <= n) {
        i++;
    }
    
    int k = i - 1;
    cout << k << "\n";
    
    int sum = 0;
    for (int j = 1; j < k; j++) {
        cout << j << " ";
        sum += j;
    }
    cout << n - sum << "\n";
    
    return 0;
}
