#include <iostream>
using namespace std;
/*
// O(n) & O(n) brute
int main(){
    int n;
    cin >> n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin >> arr[i];
    }
    int arr1[n];
    arr1[n-1] = arr[0];
    for(int i = 1;i<n;i++){
        arr1[i-1] = arr[i];
    }
    for(int i=0;i<n;i++){
        cout << arr1[i]  << " ";
    }
}
*/
// optimal  O(N) & O(n)

int main(){
    int n;
    cin >> n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin >> arr[i];
    }
    int temp = arr[0];
    for(int i=0;i<n-1;i++){
        arr[i] = arr[i+1];
    }
    arr[n-1] = temp;
    for(int i=0;i<n;i++){
        cout << arr[i]  << " ";
    }
}

