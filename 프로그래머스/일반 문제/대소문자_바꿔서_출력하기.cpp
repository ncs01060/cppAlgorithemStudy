#include <iostream>
#include <string>


using namespace std;

bool isupper(int* n){
    if(*n >= 65 && *n <= 90){
        return 1;
    }
    return 0;
}

bool islower(int* n){
    if(*n >= 97 && *n <= 122){
        return 1;
    }
    return 0;
}

int main(void) {
    string str;
    string result;
    cin >> str;
    for(int i = 0; i<str.length(); i++){
        if(isupper(str[i])){
            result += str[i] + 32;
        }
        else if(islower(str[i])){
            result += str[i] - 32;
            
        }
        else {
            result += str[i];
        }
    
    }
    cout << result;
    return 0;
}