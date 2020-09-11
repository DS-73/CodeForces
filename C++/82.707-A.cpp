#include <iostream>
#include <vector>

using namespace std;

int main(){
    int n, m;       cin >> n >> m;
    vector<char> v(n * m);
    for(int i = 0; i < v.size(); i++){
        cin >> v[i];
    }

    int flag = 0;
    for(int i = 0; i < v.size(); i++){
        if(v[i] != 'W' && v[i] != 'B' && v[i] != 'G'){
            flag  = 1;
            break;
        }
    }
    if(flag == 1){
        cout << "#Color";
    }
    else{
        cout << "#Black&White";
    }


    return 0;
}
