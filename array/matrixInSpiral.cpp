#include <iostream>
using namespace std;

#include <vector>
// O(m*n) && O(m*n)
int main(){
    int m,n;
    cin >> m >>n;
    vector<vector<int>>arr(m, vector<int>(n));
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            cin >> arr[i][j];
        }
    }
    // right -> bottom -> left -> up
    vector<int> ans;
    int top =0, right=n-1, bottom=m-1, left=0;
    while(top<=bottom  && left<=right){
        // right
        for(int i=left;i<=right;i++){
            ans.push_back(arr[top][i]);
        }
        top++;
        // bottom
        for(int i=top;i<=bottom;i++){
            ans.push_back(arr[i][right]);
              
        }
        right--;  
        // left
        if(top <= bottom){
            for(int i=right;i>=left;i--){
                ans.push_back(arr[bottom][i]);
            }
            bottom--;
        }
        // up
        if(left<=right){
            for(int i=bottom;i>=top;i--){
                ans.push_back(arr[i][left]);
            }
            left++;
        }
    }
    for(auto it : ans){
        cout << it << " ";
    }
}