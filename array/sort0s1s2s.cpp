#include <iostream>
using namespace std;


// brute => sorting
/*
// better => O(N) + O(N) && O(1)
int main(){
    int n;
    cin >> n;
    int arr[n];
    int hash[3] ={0};

    for(int i=0;i<n;i++){
        cin >> arr[i];
        hash[arr[i]]++;
    }

    // int k = hash[0]; // k = 2
    // for(int i =0;i<k;i++){
    //     arr[i] = 0;
    // }
    
    // int l =  k + hash[1];; // l = 2 + 1 = 3
    // for(int i =k;i<l;i++){
    //     arr[i] = 1;
    // }

    // int m = l + hash[2]; // m = 3 + 2 = 5
    // for(int i =l;i<m;i++){
    //     arr[i] = 2;
    // }
    int index = 0;

    // Fill 0s
    for (int i = 0; i < hash[0]; i++) {
        arr[index++] = 0;
    }

    // Fill 1s
    for (int i = 0; i < hash[1]; i++) {
        arr[index++] = 1;
    }

    // Fill 2s
    for (int i = 0; i < hash[2]; i++) {
        arr[index++] = 2;
    }

    for(auto it : arr){
        cout << it << " ";
    }
}
*/
// optimal : Dutch National flag algorithm
// mid high low
int main(){
    int n;
    cin >> n;
    int arr[n];

    for(int i=0;i<n;i++){
        cin >> arr[i];
    }
    int low = 0;
    int high = n-1;
    int mid = 0; 
    while(mid<=high){
        if(arr[mid]==0){
            swap(arr[low], arr[mid]);
            mid++; low++;
        } else if(arr[mid] == 1){
            mid++;
        } else if(arr[mid] == 2){
            swap(arr[mid], arr[high]);
            high--;
        }
    }
    for(auto it: arr){
        cout << it << " ";
    }
}
