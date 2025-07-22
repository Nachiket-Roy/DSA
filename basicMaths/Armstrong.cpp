#include <iostream> 
using namespace std;


int main(){
    int num;
    cin >> num;
    int original = num;
    int ld, result = 0;
    while(num >0){
        ld = num % 10;
        num = num / 10;
        result += ld * ld * ld;
    }
    if(result == original) cout << "true (Armstrong Number)";
    else cout << "false";
    return 0;
}