#include <iostream>

bool valid_braces(std::string braces) {
    int count = 0;
    for (int i = 0; i < braces.size(); i++) {
        if (braces[i] == '(') {
            count++;
        } else if (braces[i] == ')') {
            count--;
        } else if (braces[i] == '[') {
            count += 2;
        } else if (braces[i] == ']') {
            count -= 2;
        } else if (braces[i] == '{') {
            count += 3;
        } else if (braces[i] == '}') {
            count -= 3;
        }
        if (count < 0) {
            return false;
        }
    }
    if (count == 0) {
        return true;
    } else {
        return false;
    }
}

int main() {
    
}