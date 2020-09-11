#include <iostream>

using namespace std;

int main(){
    int64_t n, res = 0;      cin >> n;
    int i = 1, flag = 0;

    while(res <= n){
        res += (i * (i + 1)) / 2;
        if(res == n || res > n){
            if(res > n)
                i--;
            break;
        }
        i++;
    }

    cout << i ;
    
    return 0;
}
