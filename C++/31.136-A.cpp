#include <iostream>

using namespace std;

int main(){
    int n;
    cin >> n;

    int *arr = new int[n], *temp = new int[n];
    for(int i = 0; i < n; i++){
        cin >> *(arr + i);
    }

    for(int i = 0; i < n; i++){
        temp[arr[i] - 1] = i + 1;
    }

    for(int i = 0; i < n; i++){
        cout << temp[i] << " ";
    }


    return 0;
}
