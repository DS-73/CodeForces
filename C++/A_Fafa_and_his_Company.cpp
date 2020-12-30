#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int main(){
    int n, count = 0;      cin >> n;
    for(int i = 1; i <= (n/2); ++i){
        if(n % i == 0){
            ++count;
        }
    }
    cout << count;
    return 0;
}

