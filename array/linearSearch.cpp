#include <iostream>
using namespace std;

// O(n)
int main(){
    int n;
    cin >> n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin >> arr[i];
    }
    int k;
    cin >> k;
    for(int i=0;i<n;i++){
        if(arr[i] == k){
            cout << i;
        }
    }
}