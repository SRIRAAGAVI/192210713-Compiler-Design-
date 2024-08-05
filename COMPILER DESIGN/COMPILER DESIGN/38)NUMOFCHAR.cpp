#include <stdio.h>
#include <ctype.h>
#include <string.h>

#define MAX_LINE_LENGTH 1024

int main() {
    int c; // Current character
    int characters = 0; // Count of characters
    int words = 0; // Count of words
    int lines = 0; // Count of lines
    int in_word = 0; // Flag to track if we are in a word
    char line[MAX_LINE_LENGTH]; // Buffer to read lines

    printf("Enter text (end with 'END' on a new line):\n");

    // Read lines until "END" is encountered
    while (fgets(line, MAX_LINE_LENGTH, stdin)) {
        if (strncmp(line, "END", 3) == 0 && (line[3] == '\n' || line[3] == '\0')) {
            break;
        }

        for (int i = 0; line[i] != '\0'; i++) {
            c = line[i];
            characters++; // Count every character

            if (c == '\n') {
                lines++; // Increment line count on newline
            }

            if (isspace(c) || ispunct(c)) {
                // End of a word if whitespace or punctuation is encountered
                if (in_word) {
                    words++;
                    in_word = 0;
                }
            } else {
                // We are in a word
                in_word = 1;
            }
        }
    }

    // If the last character was part of a word, count it
    if (in_word) {
        words++;
    }

    // Print the counts
    printf("Characters: %d\n", characters);
    printf("Words: %d\n", words);
    printf("Lines: %d\n", lines);

    return 0;
}
