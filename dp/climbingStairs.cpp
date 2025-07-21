#include <iostream>
using namespace std;

// find the no. of ways you can cover stairs if you can either take 1 or 2 steps  {solution similar to fibonacci} [use matrix exponentiation to get O(log N) not O(N)]

int f(int ind){
    if( ind == 0) return 1; // at 0th stairs =>  1 ways 
    if(ind == 1) return 1;
    int left = f(ind-1);
    int right = f(ind-2);
    return left + right;
}

int main(){
    int ind;  // no. of steps
    cin >>  ind;
    cout << f(ind);
}