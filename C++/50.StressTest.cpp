#include <iostream>
#include <vector>

using namespace std;

int main(){
    int i = 1;
    while(1){
        long long res1 = 0, res2 = 0;
        for(int i = 0; i < 2*i; i++){
            res1 = 2*(i + 1);
            res2 = 2*(i + 1) - 1;
        }

        if(res1 != res2){
            cout << endl << "Unsuccessful Attempt <<  " << i << "  >> " << endl;  
            cout << res1 << " : " << res2 ;
            return 0;
        }
        else{
            cout << endl << "Successful Attempt << " << i << "  >> ";
        }
        i++;

    }
    return 0;
}
