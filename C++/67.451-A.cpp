#include <iostream>

using namespace std;

int main(){
    int n, m;
    cin >> n >> m;

    if(n < m){
        if(n % 2){
            cout << "Akshat" << endl; 
        }
        else{
             cout << "Malvika" << endl;
        }
    }
    else{
        if(m % 2){
            cout << "Akshat" << endl; 
        }
        else{
             cout << "Malvika" << endl;
        }
    }

    return 0;
}

