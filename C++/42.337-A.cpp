#include <iostream>
#include <algorithm>

using namespace std;

int main(){
    int n, m;
    cin >> n >> m;

    int *arr = new int[m];
    for(int i = 0; i < m; i++){
        cin >> *(arr + i);
    }

    sort(arr, arr + m);
    
    long long int res = arr[n-1] - arr[0];
    if( !(n == m) ){
        long long int temp;
        for(int i = 0, j = n - 1; j < m; j++, i++){
            temp = arr[j] - arr[i];
            if(temp < res){
                res = temp;
            }

        }
    }
    cout << res;

    return 0;
}