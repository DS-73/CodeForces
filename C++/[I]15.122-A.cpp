#include <iostream>

using namespace std;

int main(){
    int arr[] = {4, 7, 44, 47, 74, 77, 444, 447, 474, 744, 747, 774, 477, 777};
    int size = sizeof(arr) / sizeof(arr[0]);
    
    int n, i;
    cin >> n;
    
    for(i = 0; i < size; i++){
        if(n % arr[i] == 0){
            cout << "NO";
            break;
        }
    }
    if(n % arr[i]){
        cout << "YES";
    }
    
    
    return 0;
}
