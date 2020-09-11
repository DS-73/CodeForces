#include <iostream>
#include <algorithm>

using namespace std;

bool desc(int a, int b){
    return (a > b);
}

int main(){
    int n;
    cin >> n;

    int *arr = new int[n];
    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }

    long long sum = 0;
    for(int i = 0; i < n; i++){
        sum += arr[i];
    }

    sort(arr, arr+n, desc);

    long temp_sum = 0, count = 0;
    while(temp_sum <= (sum/2)){
        temp_sum += arr[count++];
    }

    cout << count;
    return 0;
}
