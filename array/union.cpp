#include <iostream>
using namespace std;
#include <vector>
// given 2 sorted array merege them in one no duplicates should be in the new array formed
/*
// O(n × log k₁ + m × log k₂)  && O(n + m)
#include <set>
int main(){
    int n;
    cin >> n;
    int m;
    cin >> m;
    set<int> s;
    int arr1[n],arr2[m];
    for(int i=0;i<n;i++){ 
        cin >> arr1[i];
        s.insert(arr1[i]); // Each insertion into set takes O(log k) time, where k is the number of elements in the set at that moment => n log k1
    }

    for(int j=0;j<m;j++){
        cin >> arr2[j];
        s.insert(arr2[j]); // m log k2
    }
    for(auto it : s){
        cout << it << " ";
    }

}
*/
/*
// map  same as prev
#include <map>
int main(){
    int n;
    cin >> n;
    int m;
    cin >> m;
    int arr1[n],arr2[m];
    map <int,int> mpp;
    vector <int> temp;
    for(int i=0;i<n;i++){
        cin >> arr1[i];
        mpp[arr1[i]]++;
    }

    for(int i=0;i<m;i++){
        cin >> arr2[i];
        mpp[arr2[i]]++;
    }
    for(auto it: mpp){
        temp.push_back(it.first);
    }
    
    for(auto it : temp){
        cout << it << " ";
    }

}
*/
//  2 pointer  same time complexity  and space complexity

int main(){
    int n;
    cin >> n;
    int m;
    cin >> m;
    int arr1[n],arr2[m];
    vector <int> temp;
    for(int i=0;i<n;i++){
        cin >> arr1[i];
    }

    for(int i=0;i<m;i++){
        cin >> arr2[i];
    }
    int i = 0; int j =0;
    while(i<n && j<m){
        if(arr1[i] == arr2[j]){
           if(temp.empty() || temp.back() != arr1[i]) temp.push_back(arr1[i]);
           i++; j++;
        }
        else if(arr1[i]> arr2[j]){
            if(temp.empty() || temp.back() != arr2[j]) temp.push_back(arr2[j]);
            j++;
        }
        else if(arr1[i]< arr2[j]){
            if(temp.empty() || temp.back() != arr1[i]) temp.push_back(arr1[i]);
            i++;
        }
    }
    while(i<n){
        if(temp.empty() || temp.back() != arr1[i]) temp.push_back(arr1[i]);
        i++;
    }
    while(j<m){
        if(temp.empty() || temp.back() != arr2[j]) temp.push_back(arr2[j]);
        j++;
    }
    for (auto it : temp){
        cout << it << " ";
    }
}