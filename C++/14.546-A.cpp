#include <iostream>

using namespace std;

int main(){
    int k, n ,w;
    cin >> k >> n >> w;

    unsigned long long int cost = k * ( (n * (n +1) ) / 2) ;
    unsigned long long int res = cost - n;

    cout << res;
    
    return 0;
}
