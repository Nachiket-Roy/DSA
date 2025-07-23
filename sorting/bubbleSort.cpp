#include <iostream>
using namespace std;

// take a range(2) then keep sorting so that the largest gets to its position ie last O(N ** 2)
int main(){
    int n;
    cin >> n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin >> arr[i];
    }
    for(int i=n-1;i>=0;i--){
        for(int j=0;j<=i;j++){
            if(arr[j] > arr[j+1]){
                swap(arr[j], arr[j+1]); // Bubble sort compares adjacent elements
            }
        }
    }
    for(int i=0;i<n;i++){
        cout << arr[i] << " ";
    }
}

