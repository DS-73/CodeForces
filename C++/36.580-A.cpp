#include <iostream>

using namespace std;

int main(){
    long long int n, max = 1, temp_max = 1;
    cin >> n;

    int *arr = new int[n];
    for(int i = 0; i < n; i++){
        cin >> *(arr + i);
    }

    for(int i = 1; i < n; i++){
        if( (*(arr + i)) >= (*(arr + i -1)) ){
            temp_max ++;
        }
        else{
            temp_max = 1;
        }

        if(temp_max > max){
            max  = temp_max;
        }
    }
    cout << max;

    return 0;
}
