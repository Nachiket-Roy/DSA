#include <iostream>
using namespace std;
/* brute
int main(){
    int n;
    cin >> n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin >> arr[i];
    }
    int d;
    cin >> d;
    d = d % n;
    int temp[n];
    for(int i = 0;i<d;i++){
        temp[n-d+i] = arr[i];
    }
    for(int i=d;i<n;i++){
        temp[i-d] = arr[i]; 
    }
    for(int i=0;i<n;i++){
        cout << temp[i]  << " ";
    }
}
*/
// brute O(N) & O(d)
/*
int main(){
    int n;
    cin >> n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin >> arr[i];
    }
    int d;
    cin >> d;
    d = d % n;
    int temp[d];
    for(int i=0;i<d;i++ ){
        temp[i] = arr[i];
    }

    for(int i=d;i<n;i++){
        arr[i-d] = arr[i];
    }

    for(int i = 0;i<d;i++){
        arr[n-d+i] = temp[i];
    }

    for(int i=0;i<n;i++){
        cout << arr[i] << " ";
    }
}
*/

// optimal O(n) & O(1)
// reverse the d elements and then the rest then the whole

int reverse(int arr[], int i, int j){
    while(j>=i){
        swap(arr[i], arr[j]);
        i++;
        j--;
    }
    return 0;
}

int main(){
    int n;
    cin >> n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin >> arr[i];
    }
    int d;
    cin >> d;
    d = d % n;
    reverse(arr,0,d-1);
    reverse(arr,d,n-1);
    reverse(arr,0,n-1);
    for(int i=0;i<n;i++){
        cout << arr[i] << " ";
    }
}
