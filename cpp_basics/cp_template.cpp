#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n;
    cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; i++) cin >> a[i];

    for(int i=0;i<n;i++){
        cout<< a[i]<< " "<< "\n";
        // ... your per-test-case logic ...
        // wrote this cause iw anted to see this template working.

    }
    
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int t = 1;
    cin >> t;            // remove this line if the problem has a single test case
    while (t--) {
        solve();
    }

    return 0;
}