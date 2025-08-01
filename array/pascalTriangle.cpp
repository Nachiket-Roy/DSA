#include <iostream>
using namespace std;

/*
// variant 1: row and col is given output the number O(c) : running loop r times that is c - 1
// nCr = n! / (r! * (n-r)!)
// n = r - 1 & r = c - 1.

int nCr(int n, int r){
    int res =1; 
    for(int i = 0; i < r; i++){
        res = res * (n - i) / (i + 1);
    }
    return res;
}

int main(){
    int r,c;
    cin >> r >> c;
    int result = nCr(r-1,c-1);
    cout << result;
}
*/

/*
// variant 2 : print the whole row
// O(n * r) { n : row number & c : column from 0 to n -1 }
int nCr(int n, int r){
    int res =1; 
    for(int i = 0; i < r; i++){
        res = res * (n - i) / (i + 1);
    }
    return res;
}

void pascal(int n){
    int r = n - 1;
    for(int i = 0; i<=r;i++){ // each element to display 
        cout << nCr(r,i) << " ";
    }
    cout << endl;
}

int main(){
    int N;
    cin >> N;
    pascal(N);
}
*/

/*
// optimal O(N)
#include <vector>
int pascal(int n){
    if(n==1){
        cout << 1;
        return 0;
    }
    vector<int> ans; // always starts with 1
    int curr = 1;
    ans.push_back(curr);  // First element is always 1
    int rowIndex = n - 1;
    for(int i= 1;i<= rowIndex;i++){
        curr = curr * (rowIndex - i + 1)/ i;
        ans.push_back(curr);
    }
    for(int val : ans){
        cout << val << " ";
    }
    return 0;
}

int main(){
    int N;
    cin >> N;
    pascal(N);
}
*/


/*
// variant 3 : print whole triangle till given n

// brute O(n * n * r)
int nCr(int n, int r){
    int res =1; 
    for(int i = 0; i < r; i++){
        res = res * (n - i) / (i + 1);
    }
    return res;
}

void pascal(int n){
    int r = n - 1;
    for(int i = 0; i<=r;i++){ // each element to display 
        cout << nCr(r,i) << " ";
    }
    cout << endl;
}

int main(){
    int N;
    cin >> N;
    for(int i =0; i<=N;i++){
        pascal(i);
    }
}
*/

// optimal O(n2)
#include <vector>
int pascal(int n){
    vector<int> ans; // always starts with 1
    int curr = 1;
    ans.push_back(curr);  // First element is always 1
    int rowIndex = n - 1;
    for(int i= 1;i<= rowIndex;i++){
        curr = curr * (rowIndex - i + 1)/ i;
        ans.push_back(curr);
    }
    for(int val : ans){
        cout << val << " ";
    }
    cout << endl;
    return 0;
}

int main(){
    int N;
    cin >> N;
    for(int i = 1;i<=N;i++){
        pascal(i);
    }
    
}
