#include <iostream>

using std::cin;
using std::cout;
using std::endl;

int main(){
    int arr[5][5];
    for(int i = 0; i < 5; i++){
        for(int j = 0; j < 5; j++){
            cin >> arr[i][j];
        }
    }
    
    int i1, j1, res = 0;
    for(int i = 0; i < 5; i++){
        for(int j = 0; j < 5; j++){
            if(arr[i][j] == 1){
                i1 = i;
                j1 = j;
                break;
            }
        }
    }

    while(i1 > 2 && i1 != 2){
        i1--;
        res++;
    }

    while(j1 > 2 && j1 != 2){
        j1--;
        res++;
    }


    while(i1 < 2 && i1 != 2){
        i1++;
        res++;
    }

    while(j1 < 2 && j1 !=2){
        j1++;
        res++;
    }

    cout << res;

    return 0;
}