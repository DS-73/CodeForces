#include <iostream>

using namespace std;

int main(){
    int n, h;
    cin >> n >> h;

    int *arr = new int[n];
    for(int i = 0; i < n; i++){
        cin >> *(arr + i);
    }

    int res = 0;
    for(int i = 0; i < n; i++){
        if( *(arr + i) > h){
            res += 2;
        }
        else{
            res += 1;
        }
    }

    cout << res;

    return 0;
}
