#include <stdio.h>
#include <stdlib.h>

char *remove_url_anchor(const char *url_in) {
    char *url_out = malloc(100);
    int i = 0;
    while (url_in[i] != '#' && url_in[i] != '\0') {
        url_out[i] = url_in[i];
        i++;
    }
    url_out[i] = '\0';
    return url_out;
}

int main() {
    char *url = "www.codewars.com#about";
    printf("%s\n", remove_url_anchor(url));
    return 0;
}