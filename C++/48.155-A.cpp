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

    int min = v[0], max = v[0], count = 0;
    for(int i = 1; i < n; i++){
        if(v[i] < min){
            min = v[i];
            count++;
        }
        else if(v[i] > max){
            max = v[i];
            count++;
        }
    }
    cout << count << endl;

    return 0;
}

