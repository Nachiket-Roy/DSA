#include <iostream>
using namespace std;

// find the lonest subarray whose sum = k(positive) return the length
/*
// brute O(n ** 3)
int main(){
    int n;
    cin >> n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin >> arr[i];
    }
    int k;
    cin >> k;
    int len = 0;
    for(int i=0;i<n;i++){
        for(int j=i;j<n;j++){
            int sum = 0;
            for(int m=i;m<=j;m++){
                sum +=arr[m];
            }
            if(sum == k){
                len = max(len,j-i+1);
            }
        }
    }
    cout << len;
}
*/
// brute O(n**2)
/*
int main(){
    int n;
    cin >> n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin >> arr[i];
    }
    int k;
    cin >> k;
    int len = 0;
    for(int i=0;i<n;i++){
        int sum = 0;
        for(int j=i;j<n;j++){
            sum +=arr[j];
            if(sum == k){
                len = max(len,j-i+1);
            }
        }
    }
    cout << len;
}
*/

/*
// better but optimal for both positive and negative O(N log N) && O(N)
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
    map<int,int> mpp;
    int sum =0;
    int maxLen = 0;
    for(int i=0;i<n;i++){
        sum += arr[i];
        if(sum == k){
            maxLen = max(maxLen, i+1);
        }
        int rem = sum -k;
        if(mpp.find(rem) != mpp.end()){
            int len = i - mpp[rem];
            maxLen = max(maxLen, len);
        }
        if(mpp.find(sum) == mpp.end()){
            mpp[sum] = i;
        }
    }
    cout << maxLen;
}

*/
// optimal 2 pointer 
int main(){ 
    int n;
    cin >> n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin >> arr[i];
    }
    int k;
    cin >> k;
    int sum = 0;
    int i=0;
    int len =0;
    for (int j = 0; j < n; j++) {
        sum += arr[j];

        while (sum > k && i <= j) {
            sum -= arr[i];
            i++;
        }

        if (sum == k) {
            len = max(len, j - i + 1);
        }
    }
    cout << len;
    
}