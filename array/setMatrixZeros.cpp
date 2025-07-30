// Input: matrix=[[1,1,1],[1,0,1],[1,1,1]]

// Output: [[1,0,1],[0,0,0],[1,0,1]]
#include <iostream>
using namespace std;
#include <vector>
/*
int main(){
    int m,n;
    cin >> m >> n;
    int arr[m][n];
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            cin >> arr[i][j];
        }
    }
    
    vector<pair<int, int>> zero_positions; // O(k) space
    for(int i=0;i<m;i++){ // O(n*m)
        for(int j=0;j<n;j++){
            if(arr[i][j] == 0){
                zero_positions.push_back({i,j});
            }
        }
    }
    for(auto it: zero_positions){ // O(k * (n+m)) : k =no. of zeroes to O(n+m)
        for(int k = 0;k<n;k++){ 
            arr[it.first][k] = 0;
        }
        for(int k = 0;k<m;k++){ 
            arr[k][it.second] = 0;
        }
    }

    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
    
}
*/
/*
// brute 
void markRow(vector<vector<int>> &arr, int i, int m) { //O(m)
    for (int j = 0; j < m; j++) {
        if (arr[i][j] != 0) {
            arr[i][j] = -1;
        }
    }
}
void markCol(vector<vector<int>> &arr, int j, int n){ //O(n)
    for(int i=0;i<n;i++){
        if(arr[i][j] != 0){
            arr[i][j] = -1;
        }
    }
}
int main(){
    int m,n;
    cin >> m >> n;
    vector<vector<int>> arr(m, vector<int>(n)); 
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            cin >> arr[i][j];
        }
    }
    for(int i=0;i<m;i++){ // O(n*m)
        for(int j=0;j<n;j++){
            if(arr[i][j] == 0){
                markRow(arr,i, m); 
                markCol(arr,j,n);
            }
        }
    }
    for (int i = 0; i < n; i++) { // O(n*m)
        for (int j = 0; j < m; j++) {
            if (arr[i][j] == -1) {
                arr[i][j] = 0;
            }
        }
    }
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
}
*/

// better tc -> 2 * O(n*m) && O(n+m)
/*
int main(){
    int m,n;
    cin >> m >> n;
    vector<vector<int>>arr(m,vector<int>(n));
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            cin >> arr[i][j];
        }
    }
    vector<int> markRows(m, 0); // size m, all elements 0
    vector<int> markCols(n, 0);
    for(int i=0;i<m;i++){ // O(n*m)
        for(int j=0;j<n;j++){
            if(arr[i][j] == 0){
                markRows[i]=-1;
                markCols[j] =-1;
            }
        }
    }
    for(int i=0;i<m;i++){ // O(n*m)
        for(int j=0;j<n;j++){
            if(markRows[i] == -1 || markCols[j] == -1){
                arr[i][j] =0;
            }
        }
    }
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++){
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
}
*/
//optimal sc -> O(1)
int main(){
    int m,n;
    cin >> m >> n;
    vector<vector<int>>arr(m, vector<int>(n));
    for(int i = 0; i< m;i++){
        for(int j =0;j < n; j++){
            cin >> arr[i][j];
        }
    }
    int col0 = 1;
    for(int i = 0; i< m;i++){
        for(int j =0;j < n; j++){
            if(arr[i][j] == 0 && j !=0){
                arr[i][0] =0;
                arr[0][j]=0;
            }else if(j == 0 && arr[i][j] == 0){
                col0 = 0;
            }
        }
    }
    // cleaner version of above code 
    /*
    if (arr[i][j] == 0) {
    arr[i][0] = 0;
    if (j != 0)
        arr[0][j] = 0;
    else
        col0 = 0;
    }
    */
    for (int i = 1; i < m; i++) {
        for (int j = 1; j < n; j++) {
            if (arr[i][j] != 0) {
                
                if (arr[i][0] == 0 || arr[0][j] == 0) {
                    arr[i][j] = 0;
                }
            }
        }
    }
    if(arr[0][0] == 0){ // means first row should be zeroed
        for(int j=0;j<n;j++){
            arr[0][j] = 0;
        }
    }

    if(col0 == 0){ // means first column should be zeroed
        for(int i=0;i<m;i++){
           arr[i][0] = 0;
        }
    }


    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++){
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
}