#include <iostream>
using namespace std;
// el > right side 
/*
//  brute O(N ** 2)
int main(){
    int n;
    cin >> n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin >> arr[i];
    }
    for(int i = 0;i < n; i++){
        bool isLeader = true;
        for(int j = i + 1; j < n; j++){
            if(arr[i]< arr[j]){
                isLeader = false;
                break;
            }
        }
        if(isLeader == true){
            cout << arr[i] << " ";
        }
    }
    
}
*/
#include <vector>
int main(){
    int n;
    cin >> n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin >> arr[i];
    }
    vector<int> ans;
    int maxi = arr[n-1];
    ans.push_back(arr[n-1]);
    for(int i=n-2;i>=0;i--){
        if(arr[i] > maxi){
           ans.push_back(arr[i]);
           maxi = arr[i]; 
        }
    }
// Optional: reverse the ans vector to get leaders in left-to-right order
      // reverse(ans.begin(), ans.end());

    for(auto it : ans){
        cout << it << " ";
    }
}