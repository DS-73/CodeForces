#include <iostream>

using namespace std;

int main(){
    int n;
    cin >> n;

    int flag = 0;
    while(n--){
        if( (n == 0) && (flag == 0) ){
            cout << "I hate it"; 
            return 0;
        }
        else if( (n == 0) && (flag == 1) ){
            cout << "I love it"; 
            return 0;
        }
        
        if(flag == 0){
            cout << "I hate that ";
            flag = 1;
        }
        else{
            cout << "I love that ";
            flag = 0;
        }

    }


    return 0;
}
