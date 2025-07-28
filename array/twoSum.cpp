#include <iostream>
using namespace std;

/*
// brute O(n2)
int main(){
    int n;
    cin >> n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin >> arr[i];
    }
    int k;
    cin >> k;
    int i = 0;
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if(arr[i]+ arr[j] == k){
                cout << "yes" << endl;
                cout << "{" << i << "," << j << "}";
                return 0;
            }   
        }
    }
    cout << "No" << endl;
    cout << "{" << -1 << "," << -1 << "}";
}
*/
/*
// optimal -> 2 pointer O(N) + N log N for sorting
#include <algorithm>
int main(){
    int n;
    cin >> n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin >> arr[i];
    }
    int d;
    cin >> d;
    sort(arr, arr + n);
    int l=0;
    int r=n-1;
    while(l<r){
        int sum = arr[l] + arr[r];
        if(sum == d){
            cout << "yes";
            return 0;
        }else if(arr[l] + arr[r] >d){
            r--;
        } else {
            l++;
        }
    }
}
*/

// O(nlogn ) And O(n)
#include <map>
int main(){
    int n;
    cin >> n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin >> arr[i];
    }
    int k;
    cin >> k;
    map <int,int> mpp;
    int sum =0;
    for(int i=0;i<n;i++){
        int num = arr[i];
        int needed = k - num;   
        if(mpp.find(needed) != mpp.end() ){ // mpp.find(key):Returns an iterator pointing to the key in the map if it exists. If the key does not exist, it returns mpp.end() (i.e., an iterator to one past the last element).
            cout << "yes";
            break;
        } 
        mpp[num] = i;
    }
    
    
}