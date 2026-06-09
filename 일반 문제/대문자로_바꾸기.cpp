#include <string>
#include <iostream>

using namespace std;

bool isupper(int* n){
    if(*n >= 65 && *n <= 90){
        return 1;
    }
    return 0;
}

string solution(string myString) {
    string answer = "";
    for(int i = 0; i<myString.length(); i++){
        if(!isupper(myString[i])){
            answer+=myString[i] - 32;
        } else {
            answer += myString[i];
        }
    }
    return answer;
}

int main(void){
    cout << solution("Hello");
    return 0;
}