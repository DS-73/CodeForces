#include <iostream>
#include <vector>

using namespace std;

int solve(vector<vector<char>> &v){
    for(int i = 0; i < v.size(); i++){
        for(int j = 0; j < 5; j += 3){
            if(v[i][j] == v[i][j + 1] && v[i][j] == 'O'){
                v[i][j] = v[i][j + 1] = '+';
                return 1;
            }
        }
    }
    return 0;
}

int main(){
    int n;      cin >> n;
    vector<vector<char>> v(n);
    for(int i = 0; i < n; i++){
        for(int j = 0; j < 5; j++){
            char ch;        cin >> ch;
            v[i].push_back(ch);
        }
    }

    if(solve(v)){
        for(int i = 0; i < n; i++){
            for(int j = 0; j < 5; j++){
                cout << v[i][j];
            }
            cout << endl;
        }
    }
    else{
        cout << "NO";
    }
    

    return 0;
}
