#include <iostream>
#include <algorithm>
#include <cmath>
#include <vector>

using namespace std;

void solve(){
    int num;        cin >> num;
    int noOfDigits = floor(log10(num)) + 1, i = 1, keyPress = 0;
    while(i < num %10){
        keyPress += 10;
        ++i;
    }
    i = 1;
    while(i <= noOfDigits){
        keyPress += i;
        ++i;
    }
    cout << keyPress << endl;
}


int main(){

    int t;		cin >> t;

    while(t--){
        solve();
    }

    return 0;
}