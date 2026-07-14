#include <bits/stdc++.h>
using namespace std;
using ll = long long;
using pii = pair<int,int>;
using vi = vector<int>;
#define all(x) (x).begin(), (x).end()
#define pb push_back

#ifdef LOCAL
#define dbg(x) cerr << #x << " = " << (x) << "\n"
#define dbgv(v) cerr << #v << " = "; for(auto& _x:(v)) cerr << _x << ' '; cerr << "\n"
#else
#define dbg(x)
#define dbgv(v)
#endif

void solve(int test_case) {
    // your code here

}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    for (int i = 1; i <= t; i++) {
        solve(i);
    }
    return 0;
}
