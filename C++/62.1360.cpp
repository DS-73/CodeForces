#include <iostream>

using namespace std;

int main(){
    short t;       cin >> t;
    while(t--){
        short a, b, size;     cin >> a >> b;
        if((a == b) || ((a < b) && ((a * 2) == b))){
            size = (2 * a) * (2 * a);
        }
        else if((b * 2) == a){
            size = (2 * b) * (2 * b);
        }

        else if(a > b){
            if((2 * b) < a){
                size = (2 * a) * (2 * a);
            }
            else{
                size = (2 * b) * (2 * b);
            }
        }
        else if((b > a)){
            if((2 * a) < b){
                size = (2 * b) * (2 * b);
            }
            else{
                size = (2 * a) * (2 * a);
            }
        }

        cout << size << endl;
    }

    return 0;
}
