#include <iostream>
using namespace std;
#include <set>
/*
//given sorted array 
// use set to store unique elements
// O(N log n) + (N) // each element take log n {in set}
int main(){
    int n;
    cin >> n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin >> arr[i];
    }
    set<int> s;
    for(int i=0;i<n;i++){
        s.insert(arr[i]);
    }

    for(auto it : s){
        cout << it << " ";
    }
    
}

*/
// two pointers O(N) & O(d)
int f(int arr[], int n){
    int i = 0;
    int j = i + 1;
    while (j<n){
        if(arr[i] == arr[j]){
            j++;
        }else{
            i++;
            swap(arr[i], arr[j]);
        }
    }
    int newN = i + 1;
    for(int k=0;k<newN;k++){
        cout << arr[k] << " ";
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
    
    f(arr, n);
}