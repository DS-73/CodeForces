#include <iostream>

using namespace std;

int main(){
    int t;      cin >> t;
    while(t--){
        int a;       cin >> a;
        float n = 360.0 / (180 - a);
        if(n ==  (int)n){
            cout << "YES" << endl;
        }
        else{
            cout << "NO" << endl;
        }
    }
    return 0;
}
