#include <stdio.h>

int n;

int main() {
    printf("Enter a string. Finish by entering Ctrl+D:\n- ");
    char c;
    for (n = 0; c != EOF;) {
        c = getchar();
        if (c == '\n') n++;

    }
    printf("\n\nYou entered %d lines \n\n", n);

}