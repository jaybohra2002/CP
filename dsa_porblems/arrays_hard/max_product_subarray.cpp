#include <bits/stdc++.h>
using namespace std;
using ll = long long;
using pii = pair<int,int>;
using vi = vector<int>;
#define all(x) (x).begin(), (x).end()
#define pb push_back

//BRUTE FORCE APPROACH FUNCTION
int bruteForce(vi &arr, int n){
    int maxi=INT_MIN;
    for(int i=0;i<n;i++){
        int prod=1;
        for(int j=i;j<n;j++){
            prod*=arr[j];
        }
        maxi=max(maxi,prod);
    }
    return maxi;
}

// OPTIMAL APPROACH FUNCTION
int optimal(vi &arr, int n){

    int prefix=1;
    int suffix=1;
    int maxi=INT_MIN;

    for(int i=0;i<n;i++){
        prefix=(prefix==0?1:prefix)*arr[i];
        suffix=(suffix==0?1:suffix)*arr[n-i-1];
        maxi=max(maxi,max(prefix,suffix));
    }
    return maxi;
}

void solve(int test_case) {
    // your code here

    
    int n;
    cin>>n;
    vi arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    int ans=optimal(arr,n);
    cout<<"Case #"<<test_case<<": "<<ans<<"\n";



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