#include <iostream>
using namespace std;
#include <vector>

// brute O(n3)
/*
// better O(n2)
int main(){
    int n;
    cin >> n;
    vector<int> arr(n);
    for(int i=0;i<n;i++){
        cin >> arr[i];
    }
    int k;
    cin >> k;

    int res = 0;
    for(int i=0;i<n;i++){
        int sum = 0;
        for(int j=i;j<n;j++){
            sum += arr[j];
            if(sum == k){
                res++;
            } else if(sum > k){
                break;
            }
        }
    }
    cout << res;
}
*/
// 
#include <map>
int main(){
    int n;
    cin >> n;
    vector<int> arr(n);
    for(int i=0;i<n;i++){
        cin >> arr[i];
    }
    int k;
    cin >> k;
    int prefixSum = 0;
    int cnt =0;
    map <int,int> mpp;
    mpp[0] =1;
    for(int i=0;i<n;i++){
        prefixSum += arr[i];
        int remove = prefixSum - k;
        if(mpp.find(remove) != mpp.end()){
            cnt += mpp[remove];
        }
        mpp[prefixSum]++;
    }
    cout << cnt;
}