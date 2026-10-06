#include <stdio.h>

int main() {
    char str[1000];
    char ch;
    int c = 0;
    int w = 0;
    int l = 0;
    int i = 0;
    int inw = 0;

    printf("Enter your text:\n");

    while ((ch = getchar()) != EOF && i < 999) {
        str[i] = ch;
        i++;


    }
    str[i] = '\0';

    i = 0;
    while (str[i] != '\0') {
        c++;

        if (str[i] == '\n') {
            l++;


        }

        if (str[i] == ' ' || str[i] == '\t' || str[i] == '\n') {
            inw = 0;


        }
        else if (inw == 0) {
            inw = 1;
            w++;


        }

        i++;


    }

    if (c > 0 && l == 0) {
        l = 1;


    }

    printf("\nCharacters: %d\n", c);
    printf("Words: %d\n", w);
    printf("Lines: %d\n", l);

    return 0;


}
