#include <iostream>

using namespace std;

int main(){
    int64_t t;          cin >> t;
    while(t--){
        int64_t n;      cin >> n;
        if(n % 4){
            cout << "NO" << endl;
        }
        else{
            cout << "YES" << endl;
        }
    }

    return 0;
}
