#include<bits/stdc++.h>
using namespace std;

int main (){

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin>>n;
    vector<int> arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    int maxi = arr[0];
    int mini = arr[0];
    
    for (auto& it :arr){
        maxi = max(maxi,it);
        mini = min(mini,it);
    }

    cout<< "maximum is "<<maxi<<"\n";
    cout<< "minimum is "<<mini<<"\n";
    cout << "range is " << maxi-mini<<"\n";
}
