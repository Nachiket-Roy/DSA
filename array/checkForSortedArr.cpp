#include <iostream>
using namespace std;
/* O(N)
int main(){
    int n;
    cin >> n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin >> arr[i];
    }
    for(int i=0;i<n-1;i++){
        if(arr[i]>arr[i+1]){
            cout << "No";
            return 0;
        }
    }
    cout << "yes";
}
*/
// O(n ** 2)

int main(){
    int n;
    cin >> n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin >> arr[i];
    }
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if (arr[j] < arr[i]){
                cout << "no";
                return 0;
            }
        }
    }
    cout << "yes";
}