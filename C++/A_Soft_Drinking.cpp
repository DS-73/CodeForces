#include <iostream>
#include <algorithm>
#include <cmath>
#include <vector>

using namespace std;

int main(){
    int n, k, l, c, d, p, nl, np;
    cin >> n >> k >> l >> c >> d >> p >> nl >> np;
    
    int total_drinks = ceil((l * k)/(nl * n));
    int lime = ceil((c * d)/n);
    int salt = ceil((p / np)/n);

    cout << min(min(total_drinks, lime), salt);

    return 0;
}