
// given an array with equal positive & negative rearrange them in alternate way

#include <iostream>
using namespace std;
#include <vector>

/*
// O(n + n/2) && O(N/2 + N/2 = N) brute
int main() {
    int n;
    cin >> n;
    int arr[n];
    vector<int> pos, neg;
    for (int i=0;i<n;i++) {
        cin >> arr[i];
        if (arr[i]>0)
            pos.push_back(arr[i]);
        else
            neg.push_back(arr[i]);
    }

    vector<int> ans(n);
    for (int i=0; i<n/2;i++) {
        ans[2*i] = pos[i];     
        ans[2*i+1] = neg[i]; 
    }

    for (int num : ans)
        cout << num << " ";

    return 0;
}
*/
// optimal O(N) && O(N)
#include <vector>
int main(){
    int n;
    cin >> n;
    vector<int> arr(n), pos, neg;
    
    for(int i = 0; i < n; i++){
        cin >> arr[i];
        if(arr[i] >= 0) pos.push_back(arr[i]);
        else neg.push_back(arr[i]);
    }

    vector<int> ans(n);
    int i = 0, p = 0, q = 0;

    while(p < pos.size() && q < neg.size()){
        ans[i++] = pos[p++];
        ans[i++] = neg[q++];
    }
    while(p<pos.size()) ans[i++] = pos[i++];
    while(q<neg.size()) ans[i++] = neg[i++];
    for(auto it : ans){
        cout << it << " ";
    }
}
/*
int main(){
    int n;
    cin >> n;
    int arr[n];
    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }
    int ans[n];
    int posIndex = 0, negIndex =1;
    for(int i=0;i<n;i++){
        if(arr[i]>=0){
            ans[posIndex] = arr[i];
            posIndex += 2;
        }else{
            ans[negIndex] = arr[i];
            negIndex +=2;
        }
    }
    for(auto it : ans){
        cout << it << " ";
    }
} 
*/