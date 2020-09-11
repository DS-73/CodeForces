#include <iostream>

using namespace std;

int main(){
    int64_t n, k;
    cin >> n >> k;

    if(n % 2 == 0){

        int64_t res;
        if( k < (n/2) + 1){
            res = 2 * k - 1;
        }
        else{
            k -= ((n/2));
            res = 2 * k;
        }
        
        cout << res;
    }
    else{
        int64_t res;
        if( k < (n/2) + 2){
            res = 2 * k - 1;
        }
        else{
            k -= ((n/2) + 1);
            res = 2 * k;
        }

        cout << res;
    }

    return 0;
}
