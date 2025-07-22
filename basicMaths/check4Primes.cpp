#include <iostream>
using namespace std;
#include <cmath>

int main(){
    int num;
    cin >> num;
    if(num <= 1){
        cout << "Not a prime" << endl;
        return 0;
    }
    for(int i=2;i<=sqrt(num);i++){
        if(num % i == 0) {
            cout << "Not a prime" << endl;
            return 0;
        }
    }
    cout  << "prime";
    return 0;
}