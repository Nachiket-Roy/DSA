#include <iostream>
using namespace std;
 /*
// O(n2) better snce 3 loop one is brute
int main(){
    int n;
    cin >> n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin >> arr[i];
    }
    int Maxsum = 0;
    for(int i=0;i<n;i++){
        int sum = 0;
        for(int j=i;j<n;j++){
            sum += arr[j];
            Maxsum = max(sum, Maxsum);
        }
    }
    cout << Maxsum;
}
*/

/*
// Kadane's algorithm O(N) 
#include <climits>
int main(){
    int n;
    cin >> n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin >> arr[i];
    }
    int maxi = INT_MIN;
    int sum = 0;
    for(int i =0;i<n;i++){
        sum += arr[i];
        maxi = max(maxi ,sum);
        if(sum<0){
            sum =0;
        }
    }
    cout << maxi;
}
*/
// Printing the subarray
#include <climits>
int main(){
    int n;
    cin >> n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin >> arr[i];
    }
    int maxi = INT_MIN;
    int sum = 0;
    int tempStart = 0;
    int start =0; int end =0;
    for(int i =0;i<n;i++){
        sum += arr[i];
        if(sum>maxi){
            maxi = max(maxi ,sum);
            start = tempStart;
            end = i;
        }
        
        if(sum<0){
            sum =0;
            tempStart = i+1;    
        }
    }
    cout << maxi << endl;
    for(int i = start; i<end;i++){
        cout << arr[i] << " ";
    }
}