#include <iostream>
using namespace std;

// O(n ** 2) && O(n)
void f(int arr[],int i ){
    if(i == 0) return;
    int j=0;
    while(j<i){
        if(arr[j]>arr[j+1]){
        swap(arr[j], arr[j+1]);
        }
        j++;
    }
    f(arr,i-1);
}

int main(){
    int n;
    cin >> n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin >> arr[i];
    }
    f(arr,n-1);
     for(int i=0;i<n;i++){
        cout << arr[i] << " ";
    }

}