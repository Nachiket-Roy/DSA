#include <iostream>
using namespace std;

/*
// TC => O(N) and SC => O(N) {Auxiliary stack space}

void f(int n,string name){
    if(n<=0) return;
    cout << name << endl;
    f(n-1, name);
}

int main(){
    int n;
    cin >> n;
    string name;
    cin >> name;
    f(n,name);
}
*/

/*
void f(int n){
    if(n <=0) return;
    cout << n << " ";
    f(n-1);
}

int main(){
    int n;
    cin >> n;
    f(n);
}
*/

/*
void f(int i,int n){
    if(i>n) return;
    cout << i << " ";
    f(i+1,n);
}

int main(){
    int n;
    cin >> n;
    int i = 1;
    f(i,n);
}
*/

// Backtracking printing after recursion call
void f(int i,int n){
    if(i<1) return;
    f(i-1,n);
    cout << i << " ";
    
}

int main(){
    int n;
    cin >> n;
    f(n,n);
}
