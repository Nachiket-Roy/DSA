#include <iostream>
using namespace std;
 
/*
// brute final boss => O(n2 * k) : k = maximum number of consecutive elements 
#include <map>
int main(){
    int n;
    cin >> n;
    int arr[n];
    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }
    int Maxcnt = 0;
    int present = 0;
    for(int i = 0; i < n; i++){
        present = arr[i] + 1;
        int cnt = 1;
        int j=0;
        while(j<n){
            if(arr[j] == present){
                cnt++;
                present = present + 1;
                j = 0;
            } else{
                j++;
            }
        }
        Maxcnt = max(cnt, Maxcnt);
    }
    cout << Maxcnt;
}
*/

/*
// better -> sorting O(N) + O(N log n)
#include <algorithm> 
int main(){
    int n;
    cin >> n;
    int arr[n];
    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }
    sort(arr, arr +n);
    int length = 0;
    int lastSmaller = arr[0];
    int cnt = 1;
    for(int i=0;i<n-1;i++){
        if(arr[i] == arr[i+1] - 1){
            cnt++;
            lastSmaller = arr[i+1];
            length = max(length, cnt);
        }else{
            cnt =1;
        }
    }
    cout << length;
}
*/
// optimal set O(N) + O(2 N) && O(N)
#include <unordered_set> 
int main(){
    int n;
    cin >> n;
    unordered_set<int> st;
    int arr[n];
    for(int i = 0; i < n; i++){
        cin >> arr[i];
        st.insert(arr[i]);
    }
    int len = 1;
    for(auto it : st){
        if(st.find(it -1) == st.end()){
            int cnt =1;
            int x = it;
            while(st.find(x+1) != st.end()){
                x = x + 1;
                cnt++;
            }
            len = max(cnt, len);
        }
    }
    cout << len;
}
