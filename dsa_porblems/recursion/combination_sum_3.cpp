#include <bits/stdc++.h>
using namespace std;
using ll = long long;
using pii = pair<int,int>;
using vi = vector<int>;
using vii = vector<vector<int>>;
#define all(x) (x).begin(), (x).end()
#define pb push_back

void combinationSum3(int k, int n, int i, vi &list, vii &ans){
    if(int(list.size())==k && n==0){
        ans.pb(list);
        return;
    }
    if(int(list.size())>k || n<0) return;

    for(int ind=i;ind<=9;ind++){
        list.pb(ind);
        combinationSum3(k,n-ind,ind+1,list,ans);
        list.pop_back();
    }
}

void solve(int test_case) {
    int k, n;
    cin >> k >> n;
    vii ans;
    vi list;
    combinationSum3(k, n, 1, list, ans);
    cout<<"Case #"<<test_case<<":\n";
    for(auto &it:ans){
        for(auto &i:it){
            cout<<i<<" ";
        }
        cout<<"\n";
    }



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