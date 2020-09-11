#include <iostream>

using namespace std;

int main(){
    int n;      cin >> n;
    int count = n / 2;
    cout << count;
    if(n % 2){
        for(int i = 0; i < n/2 -1; i++){
            cout << 2 << " ";
        }
        cout << 3;
    }
    else{
        for(int i = 0; i < n/2; i++){
            cout << 2 << " ";
        }
    }
    return 0;
}
