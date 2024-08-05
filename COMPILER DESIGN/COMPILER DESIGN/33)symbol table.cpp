#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>
#include <string.h>

#define MAX_SYMBOLS 5

int main() {
    int i = 0, j = 0, x = 0, n;
    char ch, b[15];
    printf("Expression terminated by $: ");
    while ((ch = getchar()) != '$') {
        if (i < sizeof(b) - 1) {
            b[i++] = ch;
        }
    }
    b[i] = '\0'; // Null-terminate the input string
    n = i - 1;

    printf("\nSymbol Table\n");
    printf("Symbol \t addr \t type\n");

    while (j <= n) {
        ch = b[j];
        if (isalpha(ch)) {
            // Print identifier
            printf("\n%c \t %d \t identifier\n", ch, x);
            x++;
        } else if (ch == '+' || ch == '-' || ch == '*' || ch == '='|| ch=='^' || ch=='/') {
            // Print operator
            printf("\n%c \t %d \t operator\n", ch, x);
            x++;
        }
        j++;
    }

    return 0;
}
