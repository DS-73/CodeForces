#include <iostream>
#include <vector>

using namespace std;

int main(){
    int n;  cin >> n;
    vector<int> v(n);

    int count = 0;
    for(int i = 0; i < n; i++){
        cin >> v[i];
    }
    
    int crime = 0, hired = 0;
    for(int i = 0; i < n; i++){
        if(hired - (v[i] + crime) < 0){
            count++;
        }
        else if(v[i] < 0){
            crime += v[i]; 
        }
        else{
            hired += v[i];
        }
    }

    cout << count;
    return 0;
}
