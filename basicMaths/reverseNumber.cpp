#include <iostream> 
using namespace std;
#include <vector>

int main(){
    int num;
    cin >> num;
    int revNum;
    while(num>0){
        int ld = num % 10;
        revNum = (revNum * 10) + ld;
        num = num / 10; 
    }
    cout << revNum;
}