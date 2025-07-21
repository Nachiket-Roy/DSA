#include <iostream>
using namespace std;
/* 
// 1. recursion TC => exponential (2 ** n) SC = 0(N)
int f(int n, int &result){ // result passed by reference 
    if(n <= 1){
        return result = n;
    }
    int a,b;
    // return f(n-1, a) + f(n-2, b); You're not storing the final sum into result, which is the purpose of using pass-by-reference.

    f(n-1,a);
    f(n-2,b);
    return result = a + b;
}

int main(){
    int n;
    cin >> n;
    int result;
    // Printing all the numbers 
    //  for (int i = 0; i <= n; i++) {
    //     int res;
    //     f(i, res);
    //     cout << res << " ";
    // }
    f(n, result) ;
    cout << result;
}
*/

/*
// 2. Memoization  // TC = O(N) SC = O(N) + {O(N) -> array}
#include <vector>

int f(int n,  vector<int> &dp){ 
    if(n <= 1){
        return  n;
    }
    if(dp[n] != -1) {
        return  dp[n];
    }
    
    return  dp[n] =  f(n-1, dp) + f(n-2, dp);
}

int main(){
    int n;
    cin >> n;
    vector<int> dp(n + 1, -1); // initialize all to -1
    cout << f(n, dp) ;
}
*/

/*
// 3. Tabulation TC => 0(N) SC => O(N) 
#include <vector>

int main(){
    int n;
    cin >> n;
    vector<int> dp(n + 1, -1); // initialize all to -1
    dp[0] = 0;
    dp [1] = 1;
    for(int i=2;i<=n;i++){
        dp[i] = dp[i-1] + dp[i-2];
    }
    cout << dp[n] << endl;
}
*/

// 4. Space optimization TC => 0(N) SC => O(1) 
#include <vector>

int main(){
    int n;
    cin >> n;
    int prev2 = 0;
    int prev = 1;
    int curr = 0;
    for(int i=2;i<=n;i++){
        curr = prev + prev2;
        prev2 = prev;
        prev = curr;
    }
    cout << curr << endl;
}
