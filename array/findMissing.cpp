#include <iostream>
using namespace std;
/*
// between 1 to n
// brute O(n ** 2) 
int main(){
    int n;
    cin >> n;
    int arr[n-1];
    for(int i=0;i<n-1;i++){
        cin >> arr[i];
    }
    for(int i =1;i<=n;i++){
        int flag = 0;
        for(int j=0;j<n-1;j++){
            if(arr[j] == i){
                flag = 1;
                break;
            }
        }
        if(flag == 0) cout << i;
    }
}
*/
/*
// better O(N) & O(N)
int main(){
    int n;
    cin >> n;
    int arr[n-1];
    for(int i=0;i<n-1;i++){
        cin >> arr[i];
    }
    int hash[101] ={0};
    for(int i=0;i<n-1;i++){
            hash[arr[i]]++;
    }

    for(int i=1;i<=n;i++){
        if(hash[i] == 0){
            cout << i << " ";
        }
    }
}

*/

/*
// optimal O(N)
int main(){
    int n;
    cin >> n;
    int arr[n-1];
    for(int i=0;i<n-1;i++){
        cin >> arr[i];
    }
    int tSum = (n * (n+1)) / 2;
    int ans = 0;
    for(int i=0;i<n-1;i++){
        ans = ans + arr[i];
    }
    cout << tSum-ans;
}
*/
// optimal 2 XOR

int main(){
    int n;
    cin >> n;
    int arr[n-1];
    for(int i=0;i<n-1;i++){
        cin >> arr[i];
    }
    int xor1 = 0;
    int xor2 = 0;
    for(int i=1;i<=n;i++){
        xor1 ^= i;
    }
    for(int i=0;i<n-1;i++){
        xor2 ^= arr[i];
    }
    cout << (xor1 ^ xor2);
}
