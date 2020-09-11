#include <iostream>

using namespace std;

int main(){
    int k, r;   cin >> k >> r;
    int i = 1, temp = k;

    while(i < 10){
        temp = (k * i) % 10;
        if(temp == r || temp == 0){
            cout << i ;
            return 0;
        }
        i++;
    }
    cout << 10 ;


    return 0;
}