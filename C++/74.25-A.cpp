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
    int counto = 0, counte = 0, indexo = -1, indexe = -1;
    for(int i = 0; i < n; i++){
        if(v[i] % 2){
            counto++;
            indexo = i;
        }
        else{
            counte++;
            indexe = i;
        }
    }
    if(counto == 1){
        cout << indexo + 1;
    }
    else{
        cout << indexe + 1;
    }

    return 0;
}
