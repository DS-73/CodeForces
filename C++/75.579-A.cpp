#include <iostream>
#include <vector>
#include <cmath>

using namespace std;

int main(){
    int64_t n;
    cin >> n;

    int64_t max = 10e10;
    vector<int64_t> v(30);      v[0] = 2;
    for(int i = 1; i < 30; i++){
        v[i] = (v[i - 1] * 2);
    }

    int64_t count = 0;
    while(n > 0){
        if(n == 1){
            count++;
            n = 0;
            break;
        }
        else{
            for(int i = 0; i < 30; i++){
                if( !(v[i] - n >= 0)){
                    count++;
                    n = n - v[i - 1];
                    break;
                }
            }
        }
    }

    return 0;
}
