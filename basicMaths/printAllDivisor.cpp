#include <iostream> 
using namespace std;
#include <cmath>

/*
int main(){
    int num;
    cin >> num;
    for(int i=1;i<=sqrt(num);i++){ // i <= sqrt(num) eg 36 => 6 and after iterating 6 all numbers will repeat
        if(num % i == 0){
            cout << i << " ";
            if (i != num / i) { // to print both multiplier too.
                cout << num / i << " ";
            }
        }
    }
}
*/
#include <vector>

int main(){
    int num;
    cin >> num;
    vector<int> divisors;
    for(int i=1;i<=sqrt(num);i++){
        if(num % i == 0){
            divisors.push_back(i);
            if(i != num/i){
                divisors.push_back(num/i);
            }
        }
    }
    for(int d : divisors){
        cout << d << " ";
    }
}