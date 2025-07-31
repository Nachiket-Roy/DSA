#include <iostream>
using namespace std;
#include <vector>

/*
// brute O(m*n) && O(m*n)
int main(){
    int m,n;
    cin >> m >>n;
    vector<vector<int>>arr(m, vector<int>(n));
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            cin >> arr[i][j];
        }
    }
    // res matrix will be of n * m
    vector<vector<int>> ans(n, vector<int>(m));
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            ans[j][m-1-i] = arr[i][j];
        }
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cout << ans[i][j] << " ";
        }
        cout << endl;
    }
}
*/
// optimal O(2 * (N*M)) && O(1)
#include <algorithm>
int main(){
    int m,n;
    cin >> m >>n;
    vector<vector<int>>arr(m, vector<int>(n));
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            cin >> arr[i][j];
        }
    }
    // res matrix will be of n * m
    vector<vector<int>> ans(n, vector<int>(m));
    //  transpose
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            ans[j][i] = arr[i][j];
        }
    }
    // reverse each col
    for(int i=0;i<n;i++){
        reverse(ans[i].begin(), ans[i].end());
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cout << ans[i][j] << " ";
        }
        cout << endl;
    }
}