#include <bits/stdc++.h>
using namespace std;
using ll = long long;
using pii = pair<int,int>;
using vi = vector<int>;
#define all(x) (x).begin(), (x).end()
#define pb push_back




void subset(int i, int sum, vector<int>&arr, int n, vector<int>&ans){
    if(i==n){
        ans.pb(sum);
        return;
        
    }
    subset(i+1,sum+arr[i],arr,n,ans);
    subset(i+1,sum,arr,n,ans);
}

void solve() {
    int n;
    cin>>n;
    vi arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    vector<int> ans;
    subset(0,0,arr,n,ans);

    for(auto &it:ans){
        cout<<it<<" ";
    }
    cout<<"\n";
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    while (t--) solve();
    return 0;
}