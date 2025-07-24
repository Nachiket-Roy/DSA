#include <iostream>
using namespace std;
#include <algorithm>

// brute O(nlogn)
/*
int main(){
    int n;
    cin >> n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin >> arr[i];
    }
    sort(arr, arr+n);
    cout << arr[n-2];
}
*/

/*
// better O(2N)
#include <climits>  // for INT_MAX and INT_MIN

int main(){
    int n;
    cin >> n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin >> arr[i];
    }
    int largest = INT_MIN;
    for(int i=0;i<n;i++){
        if(arr[i]>largest){
            largest = arr[i];
        }
    }
    int s_largest = INT_MIN;
    for(int i=0;i<n;i++){
        if(arr[i] !=largest && arr[i] > s_largest){
            s_largest = arr[i];
        }
    }
    cout << s_largest;  
}
*/

// O(N) optimal
#include <climits>  // for INT_MAX and INT_MIN
int main(){
    int n;
    cin >> n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin >> arr[i];
    }
    int largest = INT_MIN;
    int slargest = -1;
    for(int i=0;i<n;i++){
        if(arr[i]>largest){
            slargest = largest;
            largest = arr[i];
        }else{
            if(arr[i] > slargest && arr[i] != largest)
            slargest = arr[i];
        }
    }
    cout << slargest;
}
