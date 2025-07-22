#include <iostream>
using namespace std;

// 1. reverse an array 2  pointer recursion approach
/*
void f(int arr[], int l, int r){
    if(l >= r) return;
    swap(arr[l], arr[r]);
    f(arr,l+1, r-1);
}

int main(){
    int arr[4];
    for(int i=0;i<4;i++){
        cin >> arr[i];
    }
    f(arr, 0, 3);
    for(int i=0;i<4;i++){
        cout << arr[i] << " ";
    }
}
*/
// 1 pointer :
void f(int arr[], int i){
    if(i >= 2) return;
    swap(arr[i], arr[4-i-1]);
    f(arr,i+1);
}

int main(){
    int arr[4];
    for(int i=0;i<4;i++){
        cin >> arr[i];
    }
    f(arr, 0);
    for(int i=0;i<4;i++){
        cout << arr[i] << " ";
    }
}
