#include <iostream>
using namespace std;
/*
// Parameterised way -  pass an extra parameter that carries intermediate results through the recursive calls. The goal is to accumulate results via parameters, not returns

void f(int i , int sum){
    if(i<1){
        cout << sum;
        return;
    }
    f(i-1, sum + i);

}

int main(){
    int i;
    cin >> i;
    f(i, 0);
}
*/
// functional way - each function returns a value and relies on the return values of recursive calls to build up a result.

int f(int n){
    if (n == 0) return 0;
    return n + f(n-1);
}

int main(){
    int n;
    cin >> n;
    cout << f(n);
}