#include <iostream> 
using namespace std;

/*
// TC => O(min(n1,n2))
int main(){
    int n1, n2;
    cin >> n1 >> n2;
    int n =  min(n1,n2);
    int hdf = 1;
    for (int i=1;i<=n; i++){
        if(n1 % i == 0 && n2 % i == 0){
            hdf = i;
        }
    }
    cout << hdf;
}
*/

// Euclidean Algorithm

void f(int n1,int n2){
    if (n1 == 0 || n2 == 0) {
    cout << max(n1, n2);
    return;
    }
    if(n1>n2){
        f(n1-n2, n2);
    }else{
        f(n1, n2-n1);
    }
}

int main(){
    int n1, n2;
    cin >> n1 >> n2;
    f(n1,n2);
}
