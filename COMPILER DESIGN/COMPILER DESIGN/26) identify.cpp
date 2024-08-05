#include <stdio.h>
#include <ctype.h>

int main() {
    int i, id = 0, digit = 0, op = 0;
    char e[50];

    printf("Enter an equation: ");
    fgets(e, sizeof(e), stdin);

    for (i = 0; e[i] != '\0'; i++) {
        char ch = e[i];

        if (isalpha(ch)) {
            printf("%c is an identifier \n", ch);
            id++;
        } else if (isdigit(ch)) {
            printf("%c is a digit \n", ch);
            digit++;
        } else if (ch == '+' || ch == '-' || ch == '*' || ch == '/' || ch == '^' || ch == '=') {
            printf("%c is an operator \n", ch);
            op++;
        } else if (ch != ';' && ch != ' ') { // Ignore spaces and newline characters
            printf("%c is an delimitter \n", ch);
        }
    }

    printf("Total identifiers: %d\n", id);
    printf("Total digits: %d\n", digit);
    printf("Total operators: %d\n", op);
    printf("Total Tokens: %d\n", id + digit + op);

    return 0;
}