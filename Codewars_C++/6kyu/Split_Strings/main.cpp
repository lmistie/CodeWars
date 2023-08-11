#include <iostream>
#include <string>
#include <vector>

std::vector<std::string> solution(const std::string &s) {
    std::vector<std::string> result;
    std::string temp;
    for (int i = 0; i < s.size(); i++) {
        temp += s[i];
        if (i % 2 == 1) {
            result.push_back(temp);
            temp = "";
        }
    }
    if (temp.size() == 1) {
        temp += '_';
        result.push_back(temp);
    }
    return result;
}

int main() {
    // std::string s = "abc";
    // std::string s = "abcdef";
    std::string s = "HelloWorld";
    std::vector<std::string> result = solution(s);
    for (int i = 0; i < result.size(); i++) {
        std::cout << result[i] << std::endl;
    }
    return 0;
}