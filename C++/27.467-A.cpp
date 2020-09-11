#include <iostream>

using namespace std;

int main(){
    int t, res = 0;
    cin >> t;

    while(t--){
        int pi, qi;
        cin >> pi >> qi;

        if((pi - qi) > 1)
            res++;
    }

    cout << res;


    return 0;
}
