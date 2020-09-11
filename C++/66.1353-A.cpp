#include <iostream>

using namespace std;

int main(){
    int t;
    cin >> t;

    while(t--){
        int n, m;
        cin >> n >> m;

        if(n < 2){
            cout << 2 * m << endl;
        }
        else{
            cout << (n - 1) * m << endl;
        }
    }

    return 0;
}
