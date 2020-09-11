#include <iostream>
#include <vector>

using namespace std;

int main(){
    int n;
    cin >> n;

    vector<int> v(n);
    for(int i = 0; i < n; i++){
        cin >> v[i];
    }

    int flag = 0;
    for(int i = 0; i < n; i++){
        if(v[i] == 1){
            flag = 1;
            break;
        }
    }

    if(flag == 1){
        cout << "HARD";
    }
    else{
        cout << "EASY";
    }
    

    return 0;
}

