#include <bits/stdc++.h>
using namespace std;
using ll = long long;
using pii = pair<int,int>;
using vi = vector<int>;
#define all(x) (x).begin(), (x).end()
#define pb push_back

void palindromePartitioning(string s, int ind, vector<string>&current, vector<vector<string>>&ans){
    if(ind==int(s.size())){
        ans.pb(current);
        return;
    }

    for(int i=ind;i<int(s.size());i++){
        string sub=s.substr(ind,i-ind+1);
        string rev=sub;
        reverse(all(rev));
        if(sub==rev){
            current.pb(sub);
            palindromePartitioning(s,i+1,current,ans);
            current.pop_back();
        }
    }
}

void solve(int test_case) {
    // your code here
    string s;
    cin>>s;
    //int n=s.size();
    vector<vector<string>>ans;
    vector<string>current;
    palindromePartitioning(s, 0, current, ans);
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
