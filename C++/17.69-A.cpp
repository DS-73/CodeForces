#include <iostream>

using namespace std;

int main(){
    int n;
    cin >> n;

    int x = 0, y = 0, z =0;
    while(n-- ){
        int i, j, k;
        cin >> i >> j >> k;

        x += i, y += j, z += k;
    }

    if(x == 0 && y == 0 && z == 0){
        cout << "YES";
    }
    else {
        cout << "NO";
    }


    return 0;
}

