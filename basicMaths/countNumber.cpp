#include <iostream> 
using namespace std;

/* 1. Brute
// TC => O(Number of digits) ie O(log N) The time complexity is determined by the number of digits in the input integer N. In the worst case when N is a multiple of 10 the number of digits in N is log10N + 1.

int main(){
    int num;
    cin >> num;
    int cnt = 0;
    if(num == 0) return 1;
    while(num>0){
        num = num / 10;
        cnt++;  
    }
    cout << cnt;
}
*/

// 2. Optimal  TC => O(1)as simple arithmetic operations in constant time are computed on integers.
#include <cmath>

int main(){
    int num;
    cin >> num;
    int cnt = 0;
    if(num>0){
        cnt = (int)(log10(num)+1); // log10 (100) = 2 becuse 10 ** 2 = 100 & log10(123) ≈ 2.089
    }
    cout << cnt;
}
