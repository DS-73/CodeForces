#include <iostream>
 
using namespace std;
 
int main(){
    int t, n, res_a = 0, res_d = 0;
    cin >> t;
 
    n = t;
    while(t--){
        char ch;
        cin >> ch;
 
        if(ch == 'A'){
            res_a++;
        }
        else{
            res_d++;
        }
    }
 
    if(res_a > res_d){
        cout << "Anton";
    }
    else if(res_a < res_d){
        cout << "Danik";
    }
    else {
        cout << "Friendship";
    }
 
    return 0;
}