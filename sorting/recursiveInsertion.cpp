#include <iostream>
using namespace std;

// O(N ** 2 ) & O(N)
void f(int arr[], int i,int n){
    if(i==n) return;
    int j = i;
    while(j>0 && arr[j] < arr[j-1]){
        swap(arr[j], arr[j-1]);
        j--;
    }
    f(arr,i+1,n);
}

int main(){
    int n;
    cin >> n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin >> arr[i];
    }
    f(arr,1,n);
    for(int i=0;i<n;i++){
        cout << arr[i] << " ";
    }
}