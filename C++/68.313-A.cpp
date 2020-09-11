#include <iostream>
 
using namespace std;
 
int main(){
    int64_t n;
    cin >> n;
    
    if(n >= 0){
        cout << n;
    }
    else{
        int64_t t1 = n / 10, t2 = ((n - (n % 100)) / 10) + (n % 10);
        if(t1 < t2){
            cout << t2;
        }
        else{
            cout << t1;
        }
    }
 
    return 0;
}