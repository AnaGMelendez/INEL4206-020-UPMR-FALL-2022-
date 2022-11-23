#include <stdio.h>

// Define mystrlen() here
// it should return the number of characters in the input parameter
// input parameter is of type char[] and return value is of type int

int mystrlen(char s[] ) {
     // calculate and return length of s
     // your code goes here:
    int i = 0;
    while (s[i] != '\0') ++i;
    return i;

}
int main() {
    
    int n;
    char st1[] = "Hello, World!";
    
    n = mystrlen(st1);
    printf("%d", n);

}