#include <bits/stdc++.h>
using namespace std;
using ll = long long;
using pii = pair<int,int>;
using vi = vector<int>;
#define all(x) (x).begin(), (x).end()
#define pb push_back

int countPairs(vector<int>& nums, int low, int mid, int high) {
        int right = mid + 1;
        int cnt = 0;

        // For each element in left half
        for (int i = low; i <= mid; i++) {
            // Count how many elements in right half satisfy nums[i] > 2 * nums[j]
            while (right <= high && (long long)nums[i] > 2LL * nums[right]) {
                right++;
            }
            cnt += (right - (mid + 1));
        }

        return cnt;
    }

    // Merges two sorted subarrays into one
    void merge(vector<int>& nums, int low, int mid, int high) {
        vector<int> temp;
        int left = low, right = mid + 1;

        // Merge process
        while (left <= mid && right <= high) {
            if (nums[left] <= nums[right]) {
                temp.push_back(nums[left++]);
            } else {
                temp.push_back(nums[right++]);
            }
        }

        // Append remaining elements
        while (left <= mid) temp.push_back(nums[left++]);
        while (right <= high) temp.push_back(nums[right++]);

        // Copy merged array back
        for (int i = low; i <= high; ++i) {
            nums[i] = temp[i - low];
        }
    }

    // Recursively divides the array and counts reverse pairs
    int mergeSort(vector<int>& nums, int low, int high) {
        if (low >= high) return 0;

        int mid = (low + high) / 2;
        int cnt = 0;

        cnt += mergeSort(nums, low, mid);
        cnt += mergeSort(nums, mid + 1, high);
        cnt += countPairs(nums, low, mid, high);
        merge(nums, low, mid, high);

        return cnt;
    }

void solve() {
    // BRUTE FORCE APPROACH
    int n;
    cin>>n;
    vi arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    int ans=0;
    // for(int i=0;i<n;i++){
    //     for(int j=i+1;j<n;j++){
    //         if(arr[i]>2*arr[j]) ans++;
    //     }
    // }

    ans=mergeSort(arr,0,n-1);

    cout<<"Answer is: "<<ans<<"\n";

}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    while (t--) solve();
    return 0;
}