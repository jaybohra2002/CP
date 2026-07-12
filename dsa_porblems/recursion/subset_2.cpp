#include <bits/stdc++.h>
using namespace std;
using ll = long long;
using pii = pair<int,int>;
using vi = vector<int>;
#define all(x) (x).begin(), (x).end()
#define pb push_back
void subset(int i, int n, vector<int>&arr, vector<int>&list, vector<vector<int>>&ans ){
        if(i==n){
            ans.pb(list);
            return;
        }

        list.pb(arr[i]);

        subset(i+1,n,arr,list,ans);

        list.pop_back();
        for(int ind=i+1;ind<n;ind++){
            if(arr[i]!=arr[ind]){
                subset(ind,n,arr,list,ans);
                return;
            }
        }
        subset(n,n,arr,list,ans);
    }
void solve() {
    int n;
    cin>>n;
    vi arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    vector<vector<int>> ans;
    vector<int> list;

    subset(0,n,arr,list,ans);

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
    while (t--) solve();
    return 0;
}