#include <iostream>
using namespace std;
#include <vector>

// wc - n ** 2 else nlogn


int partition(int arr[], int low, int high) {
    int pivot = arr[high];
    int i = low - 1;

    for (int j = low; j < high; j++) {
        if (arr[j] < pivot) {  
            i++;
           swap(arr[i], arr[j]);
        }
    }
    swap(arr[i + 1], arr[high]);
    return i + 1;
}

void qS(int arr[], int low, int high){
    if(low<high){
        int pi = partition(arr,low,high);
        qS(arr,low,pi-1);
        qS(arr,pi+1,high);
    }
}

int main(){
    int n;
    cin >> n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin >> arr[i];
    }
    qS(arr,0,n-1);
        
    for(int i=0;i<n;i++){
        cout << arr[i] << " ";
    }
}