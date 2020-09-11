#include <iostream>

using namespace std;

int main(){
    long long int n, res;
    cin >> n;

    if(n % 2 == 0){
        res = n / 2;
    }
    else if(n % 2 == 1){
        res = ((n - 1 ) / 2) - n;
    }
    
    cout << res;

    return 0;
}
