#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

void to_camel_case(const char *text, char *camel) {
    // Copy input text to camel
    strcpy(camel, text);

    // Loop over each character in camel
    for (int i = 0; camel[i] != '\0'; i++) {
        // If current character is a dash or underscore, replace with space
        if (camel[i] == '-' || camel[i] == '_') {
            camel[i] = ' ';
        }
        // If current character is space or first character, capitalize next character
        else if (i == 0 || camel[i-1] == ' ') {
            camel[i] = toupper(camel[i]);
        }
    }

    // Remove spaces from camel
    char *src = camel, *dst = camel;
    while (*src) {
        if (*src != ' ') {
            *dst++ = *src;
        }
        src++;
    }
    *dst = '\0';
}

// Test function
void tester(const char *input, const char *expected) {
    char camel[100];
    to_camel_case(input, camel);
    printf("Input: %s\nExpected: %s\nOutput: %s\n\n", input, expected, camel);
}

int main() {
    tester("", "");
    tester("the_stealth_warrior", "theStealthWarrior");
    tester("The-Stealth-Warrior", "TheStealthWarrior");
    tester("A-B-C", "ABC");
    return 0;
}
