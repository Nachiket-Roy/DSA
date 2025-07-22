#include <iostream>
using namespace std;
// parameterized O(N) & O(N)
void f(int n, int sum){
    if(n == 0){
        cout << sum;
        return;
    } 
    sum += n;
}
// functional
/*
void f(n-1,sum);
    int f(int n){
    if(n == 0) return 0;
    return n + f(n-1);
}
*/

// int main(){
//     int n;
//     cin >> n;
//     f(n, 0);
// }

// 2. O(N) 7 O(1)

int main(){
    int n;
    cin >> n;
    int sum = 0;
    for(int i=0;i<=n;i++){
        sum += i;
    }
    cout << sum;
}

// 3. formula  O(1) & O(1)
