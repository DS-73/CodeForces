#include <iostream>

using namespace std;

int main(){
    int a, b;
    cin >> a >> b;

    int64_t res = 0;
    while(a){
        a = a - b;
        if(a < 0){
            res += b;
            a = 0;
        }
        else{
            res += b;
            a += 1;
        }
    }

    cout << res;

    return 0;
}
