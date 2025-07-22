#include <iostream>
using namespace std;
#include <vector>

/*
// 1. 2^ N & O(N)
int f(int n){
    if (n <= 1) return  n;
    int last = f(n - 1);
    int slast = f(n - 2);
    return last + slast;
}

int main(){
    int n;
    cin >> n;
    cout << f(n);
}
*/

/*
// 2. O(2N) & O(N)
int main(){
    int n;
    cin >> n;
    int arr[n+1];
    arr[0] = 0;
    arr[1] = 1;
    if (n == 0) {
    cout << 0;
    }else if (n == 1) {
    cout << 0 << " " << 1 << "\n";
    }
    for(int i=2;i<n;i++){
        arr[i] = arr[i-1] + arr[i-2];
    }
    for(int i=0;i<n;i++){
        cout << arr[i] << " ";
    }

}
*/
// O(N) && O(1)
int main(){
    int n;
    cin >> n;
    if(n == 0){
        cout << 0;
        return 0;
    }
    int last = 1;
    int slast = 0;
    int curr;
    for(int i=1;i<=n;i++){
        curr = last + slast;
        slast = last;
        last = curr; // order of slast and last matters
        cout << curr << " ";
    }
}
