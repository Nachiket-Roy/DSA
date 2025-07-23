#include <iostream>
using namespace std;
#include <map>
#include <unordered_map>

// unordered map  vs ordered map
// map takes O(log N) but unordered_map takes O(N) only is worst case else O(1)

int main(){
    int arr[4];
    unordered_map<int,int> mpp;
    for(int i=0;i<4;i++){
        cin >> arr[i];
        mpp[arr[i]]++;
    }
    int q;
    cin >> q;
    while(q--){
        int num;
        cin >> num;
        cout << mpp[num] << endl;
    }
    // iteration over the map
    for(auto it : mpp){
        cout << it.first << "->" << it.second << endl;
    }
}

// collision done