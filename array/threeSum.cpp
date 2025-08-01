#include <iostream>
#include <iterator>
#include <algorithm>
using namespace std;
#include <vector>
#include <set>
// The problem requires unique value triplets, not just unique index combinations.

/*
int main(){
    int n;
    cin >> n;
    vector<int> arr(n);
    copy_n(istream_iterator<int>(cin), n ,arr.begin());
    set <vector<int>> triplets;
    for(int i=0;i<n-2;i++){ // O(n3)
        for(int j = i + 1; j < n-1; j++){
            for(int k = j +1 ; k < n; k++){
                if(arr[i]+ arr[j]+arr[k] == 0){
                    vector<int> temp = {arr[i], arr[j], arr[k]};
                    sort(temp.begin(), temp.end()); // log no. of unique triplets
                    triplets.insert(temp);
                }
            }
        }
    }
    for (auto it : triplets) { // iterate over triplets then there value
        for (int num : it) {
            cout << num << " ";
        }
        cout << endl;
    }
}
*/

/*
// better 
int main(){
    int n;
    cin >> n;
    vector<int> arr(n);
    copy_n(istream_iterator<int>(cin), n , arr.begin());
    
    set<vector <int>> triplets;
    for(int i = 0; i<n;i++){
        int sum = 0;
        for(int j=0;j<n;j++){

        }
    }
}
*/
// optimal 3 pointer  O(NlogN)+O(N2) 

int main(){
    int n;
    cin >> n;
    vector<int> arr(n);
    copy_n(istream_iterator<int> (cin), n , arr.begin());
    sort(arr.begin(), arr.end());
    vector<vector<int>> triplets;
    for(int i=0;i<n-2;i++){
        if (i > 0 && arr[i] == arr[i - 1]) continue; // skip duplicates for i

        int j = i + 1;
        int  k = n - 1;
        while(j<k){
            int sum = arr[i] + arr[j] + arr[k];
            if(sum == 0){
                triplets.push_back({arr[i], arr[j], arr[k]});
                // Skip duplicates for j and k
                while (j < k && arr[j] == arr[j + 1]) j++;
                while (j < k && arr[k] == arr[k - 1]) k--;
                j++;
                k--;
            }else if(sum < 0){
                j++;
            }else k--;
        }
    }
    for (auto it : triplets){
        for( auto num : it){
            cout << num << " ";
        }
        cout << endl;
    }
}