#include <iostream> 
using namespace std;

bool pali(int num, int revNum){
    return num == revNum;
}
int main(){
    int num;
    cin >> num;
    int original = num;
    int revNum = 0;
    
    while(num>0){
        int ld = num % 10;
        revNum = (revNum * 10) + ld;
        num = num / 10; 
    }
    if (pali(original, revNum)) {
        cout << "Palindrome" << endl;
    } else {
        cout << "Not a palindrome" << endl;
    }

    return 0;
}