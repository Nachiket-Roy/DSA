// Given an array of N integers, write a program to return an element that occurs more than N/2 times in the given array. You may consider that such an element always exists in the array.

#include <iostream>
using namespace std;
#include <vector>

/*
// brute O(n2) 
int main(){
    int n;
    cin >> n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin >> arr[i];
    }
    int cnt =1;
    int maxi = 0;
    int maj =  (n/2) +1;
    for(int i = 0;i<n;i++){
        for(int j = i+1;j<n-1;j++){
            if(arr[i] == arr[j]) {
                cnt++;
                maxi = max(maxi,cnt);
                if(maxi>=maj){
                    cout << arr[i];
                    return 0;
                }
            }
        }
    }
}

*/

// better O(n) + O(m) m: max element && O(m)
/*
int main(){
    int n;
    cin >> n;
    int arr[n];
    int maxi = 0;
    for(int i=0;i<n;i++){
        cin >> arr[i];
        maxi =max(maxi, arr[i]);

    }

    vector<int> hash(maxi+1, 0);
    for(int i=0;i<n;i++){
        hash[arr[i]]++;
    }
    int maj = (n/2) + 1;
    for(int i=0;i<=maxi;i++){
        if(hash[i] >= maj) {
            cout << i;
        }
        
    }
}
*/
/*
// better O(n log n) && O(k) k : distinct element 
#include <map>
int main(){
    int n;
    cin >> n;
    int arr[n];
    map<int,int> mpp;
    for(int i=0;i<n;i++){
        cin >> arr[i];
        mpp[arr[i]]++;
    }
    int maj = (n/2) + 1;
    for(auto it : mpp){
        if(it.second >= maj ){
            cout << it.first;
        }
    }

}
*/

// optimal Moore's voting alo O(N)

int main(){
    int n;
    cin >> n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin >> arr[i];
    }
    int el = arr[0];
    int cnt = 0;
    for(int i=0;i<n;i++){
         if(cnt == 0){
            el = arr[i];
            cnt++;
        }else if(arr[i] == el){
            cnt++;
        } else {
            cnt--;
        } 
    }
    cout << el;
}
