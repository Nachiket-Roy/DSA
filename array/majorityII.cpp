#include <iostream>
using namespace std;
/*
// brute O(n2)
int main(){
    int n;
    cin >> n;
    int arr[n];
    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }
    int k = n/3 ;
    for(int i = 0; i < n; i++){ // O(N)
        int cnt = 1;
        // mark alreadyCounted
        bool alreadyCounted = false;
        for(int j = 0; j < i; j++){ // O(N)
            if(arr[i] == arr[j]){
                alreadyCounted = true;
                break;
            }
        }
        if(alreadyCounted) continue;

        for(int j = i + 1; j < n; j++){ // O(N)
            if(arr[i] == arr[j]){
                cnt++;
            }
        }
        if(cnt > k){
            cout << arr[i] << " ";
        }
    }
}
*/

/*
// brute better code ->
#include <vector>
int main(){
    int n;
    cin >> n;
    int arr[n];
    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }
    int k = n/3;
    vector <int> ans;
    for(int i=0;i<n;i++){
        if( ans.size() == 0 || ans[0] != arr[i]){ // if (find(ans.begin(), ans.end(), arr[i]) == ans.end())
            int cnt = 0;
            for(int j = 0; j<n;j++){
                if(arr[j] == arr[i]){
                    cnt++;
                }
                if(cnt > k){
                ans.push_back(arr[i]);
                break;
                }
            }
            if(ans.size() == 2) break;
        }
        
    }
    for(auto it : ans){
    cout << it << " ";
    }
}
*/

/*
// better O(N log N)/ O(N) & O(N)
#include <vector>
#include <unordered_map>
int main(){
    int n;
    cin >> n;
    int arr[n];
    vector<int> ls;
    unordered_map<int, int> mpp;
    for(int i = 0; i < n; i++){
        cin >> arr[i];
        mpp[arr[i]]++;
    }
    for(auto it : mpp){
        if(it.second > n/3){
            ls.push_back(it.first);   // O(2) 
            if (ls.size() == 2) break;
        }
    }
    for (int val : ls) {
        cout << val << " ";
    }
}
*/

// optimal O(2N) && O(1)
#include <vector>
#include <climits>
int main(){
    int n;
    cin >> n;
    int arr[n];
    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }
    int cnt1 = 0, cnt2 = 0;
    int el1 = INT_MIN, el2 = INT_MIN ;
    for(int i=0;i<n;i++){
        if(cnt1 == 0 && el2 != arr[i]){
            cnt1 = 1;
            el1 = arr[i];
        } else if(cnt2 == 0 && el1 != arr[i]){
            cnt2 = 1;
            el2 = arr[i];
        } else if(arr[i] == el1) cnt1++;
        else if(arr[i] == el2) cnt2++;
        else {
            cnt1--;
            cnt2--;
        }
    }
    // verify there majority
    cnt1 = cnt2 = 0;
    for(int i=0;i<n;i++){
        if(arr[i] == el1) cnt1++;
        else if(arr[i] == el2) cnt2++;
    }
    
    if(cnt1 > n / 3) cout << el1 << " ";
    if(cnt2 > n / 3) cout << el2 << " ";
}