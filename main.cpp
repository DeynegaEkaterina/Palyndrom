#include <iostream>
#include "cctype"
#include "string"

using namespace std;
bool isPalyndrom(const std::string& s) {
    int len = s.length();
    std::string newStr = "";
    for (int i = 0; i < len; i++) {
        if ((s[i] >= 97) && (s[i] <= 122)) {
            newStr = newStr + s[i];
        }
    }
    std::cout << newStr << std::endl;
    std::string newStr1 = "";
    for (int k = (len - 1); k != -1; k--) {
        if ((s[k] >= 97) && (s[k] <= 122)) {
            newStr1 = newStr1 + s[k];
        }
    }
    std::cout << newStr1 << std::endl;
    if (newStr == newStr1) {
        std::cout << "true";
        return true;
    } else {
        std::cout << "false";
        return false;
    }
}

   /* for (int i = 0; i < len; i ++){
        if((s[i] >= 97) && (s[i] <=122)){
            newStr = newStr + s[i];
        }
        if (isupper(s[i])) {
            s[i] = tolower(s[i]);
            newStr = newStr + s[i];
        }
    }

    std::cout << newStr << std::endl;
    int len1 = newStr.length();
    for (int i = 0; i < len1/2; i++){
        if(newStr[i] != newStr[len1 - 1 - i]){
            std::cout << "false" << std::endl;
            return false;
        }
    }
    std::cout << "true" << std::endl;*/







int main() {
    std::string str = "komok";

    isPalyndrom(str);
    return 0;
}



