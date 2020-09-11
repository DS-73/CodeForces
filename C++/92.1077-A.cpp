#include <iostream>

using namespace std;

int main(){
    int t;      cin >> t;
    while(t--){
        int64_t a, b, k, res;
        cin >> a >> b >> k;
        if(k & 1){
            res = ((a - b) * (k / 2)) + a;
        }
        else{
            res = (a - b) * (k / 2);
        }
        cout << res << endl;
    }

    return 0;
}
