//解密加密程式-字元加減
#include <iostream>
using namespace std;

int main() {
    int func;
    
    cout << "請問要加密(1)還是解密(2)\n";
    cin >> func;
    
    if(func == 1){
        int number, h;
        
        cout << "請問要幾個字";
        cin >> number;
        
        char input[number + 1];
        
        cout << "請輸入字母";
        cin >> input;
        
        cout << "請問位移幾個字母";
        cin >> h;
        
        for(int a = 0; a < number; a ++){
            input[a] = input[a] + h;
            
            if(input[a] + h > 90){
                input[a] = input[a] - 90 + 65 - 1;
            }
        }
        cout << input;
    }
    
    if(func == 2){
        int number, h;
        
        cout << "請問要幾個字";
        cin >> number;
        
        char input[number + 1];
        
        cout << "請輸入字母";
        cin >> input;
        
        cout << "請問位移幾個字母";
        cin >> h;
        
        for(int a = 0; a < number; a ++){
            input[a] = input[a] - h;
            
            if(input[a] - h < 65){
                input[a] = input[a] + 90 - 65 + 1;
            }
        }
        cout << input;
    }
    return 0;
}