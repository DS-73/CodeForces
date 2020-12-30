#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

void solve(){
    /*
     *  a : Lectures
     *  b : Practical
     *  c : Lectures per pen
     *  d : Practicals per pen
     *  k : Capacity
    */
    int a, b, c, d, k;      cin >> a >> b >> c >> d >> k;
    int pen = a / c, pencil = b / d;
    if(a % c != 0){
        ++pen;
    }
    if(b % d != 0){
        ++pencil;
    }

    if(pen + pencil <= k){
        cout << pen << " " << pencil << endl;
    }
    else{
        cout << -1 << endl;
    }

}


int main(){

    int t;		cin >> t;

    while(t--){
        solve();
    }

    return 0;
}