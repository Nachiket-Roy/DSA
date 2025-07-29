#include <iostream>
using namespace std;

// brute => recursion will do later O(N! * N) & O(N) 

// brute -> use stl next_permutation

// optimal implementation of brute 
#include <algorithm>
int main(){
    int n;
    cin >> n;
    int arr[n];
    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }
    int i = n-2;
    while(i>=0 && arr[i] >= arr[i+1]){
        i--;
    }
    if(i>=0){
        int j = n-1;
        while(arr[j]<=arr[i]){
            j--;
        }
        swap(arr[i], arr[j]);
    }
    sort(arr + i + 1, arr + n);
    for(auto it : arr){
        cout << it << " ";
    }
}