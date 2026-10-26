#include <stdio.h>
#include <string.h>

int main() {
    char str[2000], str2[1000];
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

    printf("Enter second string: ");
    if (fgets(str2, sizeof(str2), stdin) == NULL) {
        return 0;


    }
    i = 0;
    while (str2[i] != '\0' && str2[i] != '\n') {
        i++;


    }
    str2[i] = '\0';

    if (strlen(str) + strlen(str2) >= sizeof(str)) {
        printf("Combined string is too long\n");
        return 0;


    }
    strcat(str, str2);
    printf("Concatenated string: %s\n", str);

    return 0;


}
