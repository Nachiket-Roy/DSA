#include <iostream>
using namespace std;
#include <vector>
/*
// O(2N) 3 if counting printing && O(N)
int main(){
    int n;
    cin >> n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin >> arr[i];
    }

    vector<int> temp;
    for(int i=0;i<n;i++){
        if(arr[i] != 0){
            temp.push_back(arr[i]);
        }
    }
    for(int i = 0;i<n;i++){
        if(temp.size() != n ){
        temp.push_back(0);
    }
    }
     // Fill the rest with zeros
    while (temp.size() < n) {
        temp.push_back(0);
    }

    for(auto it : temp){
        cout << it << " ";
    }

}
*/
// optimal O(n) & O(1)
int main(){
    int n;
    cin >> n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin >> arr[i];
    }

    int i = 0;
    int j = 1;
    while(j<=n-1){
        if(arr[i]==0 && arr[j] != 0){
            swap(arr[i],arr[j]);
            i++;
            j++;
        } else{
            j++;
        }
    }
    for(auto it : arr){
        cout << it << " ";
    }

}
