#include <iostream>
using namespace std;

// find the el that appeared only once 

/* better
// hash map O(n) + {O(k) : size of hashmap} && O(k)
#include <vector>
int main(){
    int n;
    cin >> n;
    int arr[n];
    int maxi =0;
    for(int i=0;i<n;i++){
        cin >> arr[i];
        maxi = max(maxi, arr[i]);
    }
    vector<int> hash(maxi+1,0);
    for(int i=0;i<n;i++){
        hash[(arr[i])]++;
    }
    for(int i=0;i<hash.size();i++){
        if(hash[i] == 1){
            cout << i;
            break;
        }
    }
}

*/

/*
// unordered map O(N) + O(1) {if too many collision O(n ** 2)} && O(n)
#include <unordered_map>
int main(){
    int n;
    cin >> n;
    int arr[n];
    unordered_map <int,int> mpp;
    for(int i=0;i<n;i++){
        cin >> arr[i];
        mpp[arr[i]]++;
    }
    for(auto it: mpp){
        if(it.second == 1){
            cout << it.first;
        }
    }
}
*/

/*
// O(N**2) & O(1) brute
int main(){
    int n;
    cin >> n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin >> arr[i];
    }
    int i = 0;
    int j = n-1;
    for(int i=0;i<n;i++){
        int flag =0;
        for(int j=n-1;j>=0;j--){
            if(arr[i] == arr[j] && i != j){
                flag =1;
            }
        }
        if(flag == 0){
            cout << arr[i];
        }
    }
}

*/

// optimal XOR O(N) && O(1)
int main(){
    int n;
    cin >> n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin >> arr[i];
    }
    int xor1 = 0;
    for(int i=0;i<n;i++){
        xor1 ^= arr[i];
    }
    cout << xor1;
}