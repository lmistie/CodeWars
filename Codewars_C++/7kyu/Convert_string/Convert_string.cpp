#include <iostream>
#include <string>

std::string to_camel_case(std::string text) {
    for(int i = 0; i < text.size(); i++)
    {
        if(text[i] == '-' || text[i] == '_')
        {
            text.erase(i, 1);
            text[i] = toupper(text[i]);
        }
    }
    return text;
}

int main() {
    std::cout << to_camel_case("") << std::endl;
    std::cout << to_camel_case("the_stealth_warrior") << std::endl;
    std::cout << to_camel_case("The_Stealth_Warrior") << std::endl;
    std::cout << to_camel_case("A-B-C") << std::endl;
}