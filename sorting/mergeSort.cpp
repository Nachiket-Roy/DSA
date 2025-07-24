#include <iostream>
using namespace std;
#include <vector>

// divide and merge O(N log N )  At each step, we divide the whole array, for that logn and O(N)

void merge(int arr[], int low, int mid, int high){
    vector<int> temp;
    int left = low;
    int right = mid+1;
    while (left <= mid && right <= high){
        if(arr[left] <= arr[right]){
            temp.push_back(arr[left]);
            left++;
        } else{
            temp.push_back(arr[right]);
            right++;
        }
    }
    // Copy remaining elements from left half
    while (left <= mid) {
        temp.push_back(arr[left++]);
    }

    // Copy remaining elements from right half
    while (right <= high) {
        temp.push_back(arr[right++]);
    }

    // Copy sorted elements back to original array
    for (int i = 0; i < temp.size(); i++) {
        arr[low + i] = temp[i];
    }
    
}

void mS(int arr[], int low, int high){
    if(low == high) return;
    int mid = (low + high) / 2;
    mS(arr,low,mid);
    mS(arr,mid+1,high);
    merge(arr,low,mid,high);
}

int main(){
    int n;
    cin >> n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin >> arr[i];
    }
    mS(arr, 0, n-1);
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
}