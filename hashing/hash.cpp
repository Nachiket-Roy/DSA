#include <iostream>
using namespace std;

// 10 ** 6 inside int main and 7 globally for int and for bool 7 and 8 [max size of array u can declare]
// frequency of a number in the array O(N)
// for whole array => O(size of array * N)
/*
int f(int num, int arr[]){
    int cnt = 0;
    for(int i=0;i<5;i++){
        if(arr[i] == num){
            cnt +=1;
        }
    }
    cout << cnt;
    return 0;
}

int main(){
    int num;
    cin >> num;
    int arr[5];
    for (int i=0;i<5;i++){
        cin >> arr[i];
    }
    f(num,arr);
}
*/

// Hashing
/*
int f(int arr[]){
    int hash[6] = {0};
    for(int i=0;i<5;i++){
        hash[arr[i]]++; 
    }
    int q;
    cin >> q;
    while(q--){
        int num;
        cin >> num;
        cout << hash[num] << endl;
    }
    return 0;
}

int main(){
    int arr[5];
    for (int i=0;i<5;i++){
        cin >> arr[i];
    }
    f(arr);
    return 0;
}
*/

// if not all lowercase take hash[256] remove { - 'a'}
int main(){
    string s;
    cin >> s;

    //precompute
    int hash[26] = {0};
    for(int i=0;i<s.size();i++){
        hash[s[i] - 'a']++;
    }

    int q;
    cin >> q;
    while(q--){
        char c;
        cin >> c;
        cout << hash[c - 'a'] << endl;
    }
}