#include <iostream>
using namespace std;
#include <algorithm>
#include <iterator>
#include <vector>
#include <set>

/*
// brute O(n3) + O(log no. of unique quad) && O(2 * no. of quadruplets)
int main(){
    int n;
    cin >> n;
    vector<int> arr(n);
    copy_n(istream_iterator<int> (cin), n ,arr.begin());
    int k;
    cin >> k;
    set<vector<int>> res;
    for(int i=0;i<n-3;i++){
        int sum =0;
        for(int j=i+1;j<n-2;j++){
            for(int l=j+i;l<n-1;l++){
                for(int m=l+1;m<n;m++){
                    int sum = arr[i] + arr[j] + arr[l] + arr[m];
                    if(sum == k){
                        vector<int> quadrupltes = {arr[i],arr[j],arr[l],arr[m]};
                        sort(quadrupltes.begin(), quadrupltes.end());
                        res.insert(quadrupltes);
                    }
                }
            }
        }
    }
    for(const auto& it : res){
        for(int nums : it){
            cout << nums << " ";
        }
        cout << endl;
    }
}
*/

/*
// better O(N3) + O(log sorting) && O(N) + O(2* no. of quadruplets)
#include <unordered_set>
int main(){
    int n;
    cin >> n;
    vector<int> arr(n);
    copy_n(istream_iterator<int> (cin), n ,arr.begin());
    int k;
    cin >> k;
    set<vector<int>> res;
    for(int i=0;i<n-3;i++){
        unordered_set<int> seen;
        for(int j=i+1;j<n-2;j++){
            for(int l=j+i;l<n-1;l++){
                int fourth = k - arr[i] + arr[j] + arr[l];
                if(seen.count(fourth)){
                    vector<int> quadrupltes = {arr[i],arr[j],arr[l],fourth};
                    sort(quadrupltes.begin(), quadrupltes.end());
                    res.insert(quadrupltes);
                }
                seen.insert(arr[l]);
            }
        }
    }
    for(const auto& it : res){
        for(int nums : it){
            cout << nums << " ";
        }
        cout << endl;
    }
}
*/

// optimal 4 pointer // O(N2) * O(N) && O(no. of quadruplets)
// no duplicates are allowed
int main(){
    int n;
    cin >> n;
    vector<int> arr(n);
    copy_n(istream_iterator<int> (cin), n ,arr.begin());
    int k;
    cin >> k;
    sort(arr.begin(), arr.end());
    vector<vector<int>> res;
    for(int i=0;i<n;i++){
        if(i>0 && arr[i] == arr[i - 1]) continue;
        for(int j=i+1;j<n;j++){
            if(j>i+1 && arr[j] == arr[j-1]) continue;
            int l = j + 1;
            int m = n - 1;
            while(l < m){
                int sum = arr[i] + arr[j] + arr[l] + arr[m];
                if(sum == k){
                    res.push_back({arr[i], arr[j], arr[l], arr[m]});
                    l++;m--;
                    while(l<m && arr[l] == arr[l-1]) l++;
                    while(l<m && arr[m] == arr[m+1]) m--;
                } else if(sum < k) l++;
                else m--;
            }
        }
        
    }
    for(const auto& it : res){
        for(int nums : it){
            cout << nums << " ";
        }
        cout << endl;
    }
}