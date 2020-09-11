#include <iostream>

using namespace std;

int main(){
    int n, res = 0;
    cin >> n;

    while(n--){
        int a, b, c;
        cin >> a >> b >> c;
        if((a + b + c ) > 1)
            res++;
    }
    cout << res;

    return 0;
}