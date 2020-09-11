#include <iostream>

using namespace std;

int main(){
    int n, m, i = 1;   cin >> n >> m;
    while(n > 0){
        n--;
        if(n < 0){
            cout << i;
            return 0;
        }
        if(i % m == 0){
           n++;
        }
        i++;
    }
    
    cout << --i;
    return 0;
}
