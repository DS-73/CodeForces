#include <iostream>

using namespace std;

int main(){
    int n, t;       cin >> n >> t;
    if(t > 9 && n < 2)      cout << -1 ;
    else if(t == 10 && n >= 2){
        for(int i = 1; i < n; i++){
            cout << "9";
        }
        cout << "0";
    }
    else{
        for(int i = 0; i < n; i++){
            cout << t;
        }
    }
    return 0;
}
