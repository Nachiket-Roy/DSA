#include <iostream>
using namespace std;
// brute -> apply sort and return the last element O(nlogn)
// optimal -> O(N)
int main(){
    int n;
    cin >> n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin >> arr[i];
    }
    int largest = 0;
    for(int i=0;i<n;i++){
        if(arr[i]>largest){
            largest = arr[i];
        }
    }
    cout << largest;
}