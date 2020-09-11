#include <iostream>
#include <cmath>

using namespace std;

int main(){
    int t;
    cin >> t;

    while(t--){
        long long n, temp, i = 2;
        cin >> n;
        while(i){
            temp = pow(2 , i)- 1;
            if(!(n % temp)){
                cout << n / temp << endl;
                i = 0;
            }
        }

    }
    return 0;
}
