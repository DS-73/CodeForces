#include <iostream>
#include <cmath>

using namespace std;

bool checkPrime(int64_t root){
    if(root == 1){
        return false;
    }
    else if(root == 2){
        return true;
    }
    else if(root % 2 == 0){
        return true;
    }
    

    for(int i = 2; i <= root; i += 2){
        if( !(root % i)){
            return false;
        }
    }
    return true;

}

int main(){
    int t;
    cin >> t;

    while(t--){
        int64_t n, root;
        cin >> n;

        root = sqrt(n);
        if( ((root * root) == n) && checkPrime(sqrt(root))){
            cout << "YES" << endl;
        }
        else{
            cout << "NO" << endl;
        }

    }

    return 0;
}
