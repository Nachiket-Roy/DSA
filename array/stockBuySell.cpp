#include <iostream>
using namespace std;

/*
// O(n2)
int main(){
    int n;
    cin >> n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin >> arr[i];
    }
    int profit = 0;
    int maxProfit = 0;
    for(int i=0;i<n-1;i++){
        for(int j=i+1;j<n;j++){
            profit = arr[j] - arr[i];
            maxProfit = max(profit, maxProfit);
        }
    }
    cout << maxProfit;
}
*/
//  O(n)
int main(){
    int n;
    cin >> n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin >> arr[i];
    }
    int mini = arr[0];
    int profit = 0;
    int maxProfit=0;
    for(int i =1;i<n;i++){
        profit = arr[i] - mini;
        maxProfit = max(profit, maxProfit);
        mini =  min(mini, arr[i]);
    }
    cout <<  maxProfit;
}