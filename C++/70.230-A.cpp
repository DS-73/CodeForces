#include <iostream>

using namespace std;

int main(){
    int s, n;
    cin >> s >> n;
    
    int arr[n][2];
    for(int i = 0; i < n; i++){
        cin >> arr[i][0] >> arr[i][1];
    }
    
// Sorting
    for(int i = 0; i < n - 1; i++){
        for(int j = i + 1; j < n; j++){
            if(arr[j][0] < arr[i][0]){
                int temp;
                temp = arr[j][0];
                arr[j][0] = arr[i][0];
                arr[i][0] = temp;

                temp = arr[j][1];
                arr[j][1] = arr[i][1];
                arr[i][1] = temp;
            }
        }
    }

    int flag = 0;
    for(int i = 0; i < n; i++){
        if(s <= arr[i][0]){
            flag = 1;
            break;
        }
        else{
            s += arr[i][1];
        }
    }
    if(flag == 0){
        cout << "YES";
    }
    else{
        cout << "NO";
    }

    return 0;
}
