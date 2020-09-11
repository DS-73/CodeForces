#include <iostream>
#include <vector>

using namespace std;

int main(){
    int t;
    cin >> t;

    while(t--){
        string s;
        cin >> s;
        
        if(s.size() == 1){
            cout << 1 << endl << s << endl;
        }
        else{
            int count = 0;
            vector<int> v(s.size());
            for(int i = 0; i < s.size(); i++){
                if(s[i] != '0'){
                    v[i] = (int) (s[i] - 48);
                    count++;
                }
                else{
                    v[i] = 0;
                }
            }
            cout << count << endl;
            for(int i = 0; i <s.size(); i++){
                if(v[i] != 0){
                    cout << v[i];
                    int temp = i;
                    while(++temp < s.size()){
                        cout << 0;
                    }
                    cout << " ";
                }
            }
            cout << endl;
            
        }

    }
    

    return 0;
}

