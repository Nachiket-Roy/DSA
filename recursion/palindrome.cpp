#include <iostream>
using namespace std;

/*
// recursion O(N) & O(N)
bool f(string s, int l, int r){
    if(l>=r) return true;
    if(s[l]!=s[r]) return false;
    return f(s, l+1,r-1);
}

int main(){
    string s;
    cin >> s;
    int r = s.length()-1;
    if (f(s, 0, r)) {
        cout << "Palindrome";
    } else {
        cout << "Not a palindrome";
    }
}
*/
// O(N) & O(1)

int main(){
    string s;
    cin >> s;
    int l = 0;
    int r = s.length()-1;
    while(l<r){
        if (s[l] != s[r]) {
            cout << "Not a palindrome";
            return 0;
        }
        l++;
        r--;
    }
    cout << "Palindrome";
    return 0;
}