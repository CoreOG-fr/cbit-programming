#include <stdio.h>

int main() {
    char str[1000], copy[1000];
    int i;

    printf("Enter a string: ");
    if (fgets(str, sizeof(str), stdin) == NULL) {
        return 0;


    }

    i = 0;
    while (str[i] != '\0' && str[i] != '\n') {
        i++;


    }
    str[i] = '\0';

    i = 0;
    while (str[i] != '\0') {
        copy[i] = str[i];
        i++;


    }
    copy[i] = '\0';
    printf("Copied string: %s\n", copy);

    return 0;


}
