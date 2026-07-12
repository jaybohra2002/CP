#include <bits/stdc++.h>
using namespace std;
using ll = long long;
using pii = pair<int,int>;
using vi = vector<int>;
#define all(x) (x).begin(), (x).end()
#define pb push_back

void solve() {
    // BRUTE FORCE APPROACH
    int n;
    cin>>n;
    vi arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    // ----------------------- BRUTE FORCE APPROACH  TC(O(n^2)) SC(O(1))-----------------------------
    // int repeating=-1,missing=-1;
    // for(int i=1;i<=n;i++){
    //     int cnt=0;
    //     for(int j=0;j<n;j++){
    //         if(arr[j]==i){
    //             cnt++;
    //         }
    //     }
    //     if(cnt==2) repeating=i;
    //     else if (cnt==0) missing=i;

    //     if(repeating!=-1 && missing!=-1) break;
    // }

    //----------------------- BETTER APPROACH -----------------------------

    // vi hash(n+1,0);

    // for(int i=0;i<n;i++){
    //     hash[arr[i]]++;
    // }

    // int repeating=-1,missing=-1;
    // for(int i=1;i<=n;i++){
    //     if(hash[i]==2) repeating=i;
    //     else if(hash[i]==0) missing=i;
    // }

    //----------------------- OPTIMAL APPROACH -----------------------------
    ll sum=n*(n+1)/2, sq_sum=n*(n+1)*(2*n+1)/6;
    ll sum_arr=0, sq_sum_arr=0;
    for(int i=0;i<n;i++){
        sum_arr+=arr[i];
        sq_sum_arr+=(ll)arr[i]*arr[i];
    }
    ll diff = sum - sum_arr; // missing - repeating
    ll sq_diff = sq_sum - sq_sum_arr; // missing^2 - repeating^2

    ll sum_mr = sq_diff / diff; // missing + repeating

    ll missing = (diff + sum_mr) / 2;
    ll repeating = sum_mr - missing;

    cout<<"Missing: "<<missing<<" Repeating: "<<repeating<<"\n";
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    while (t--) solve();
    return 0;
}