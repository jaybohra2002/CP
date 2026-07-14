#include <bits/stdc++.h>
using namespace std;
using ll = long long;
using pii = pair<int,int>;
using vi = vector<int>;
#define all(x) (x).begin(), (x).end()
#define pb push_back

void letterCombinations(string digits, string current, vector<string> &ans, string combos[], int i){
    if(i==int(digits.size())){
        ans.pb(current);
        return;
    }

    int digit = digits[i]-'0';
    string letters = combos[digit];

    for(char letter: letters){
        letterCombinations(digits, current+letter, ans, combos,i+1);
    }
}

void solve(int test_case) {
    // your code here

    string digits;
    cin>>digits;

    string combos[] = {"", "", "abc", "def", "ghi", "jkl", "mno", "pqrs", "tuv", "wxyz"};
    vector<string> ans;
    letterCombinations(digits, "", ans, combos, 0);
    cout<<"Case #"<<test_case<<": ";
    for(const string& s: ans){
        cout<<s<<" ";
    }
    cout<<"\n";

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
