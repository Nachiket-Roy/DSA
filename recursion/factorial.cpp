#include <iostream>
using namespace std;

/* O(N) & O(1)
int main(){
    int n;
    cin >> n;
    int fact = 1;
    for(int i=1;i<=n;i++){
        fact *= i;
    }
    cout << fact;
    return 0;
}
*/
/* Parameterized way O(N) & O(N)
void f(int n, int fact){
    if(n==0){
      cout << fact << endl;
      return ;
    } 
    fact *= n;
    f(n-1, fact);
}

int main(){
    int n;
    cin >> n;
    f(n,1);
}
*/ 
// Functional way
int f(int n){
    if(n==0) return 1;
    return f(n-1) * n ;
}

int main(){
    int n;
    cin >> n;
    cout << f(n);
}

