#include <iostream>
#include <iomanip>

using namespace std;

int main(){ 
    int n, t;
    cin >> n;
    
    t = n;
    long double res = 0;
    while(t--){
        long double num;
        cin >> num; 

        res += num;
    }
    
    res = (res / (n * 1.0));
    cout << fixed << setprecision(12) << res;

    return 0;
}
