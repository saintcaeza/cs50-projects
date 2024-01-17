#include <cs50.h>
#include <ctype.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

float calculateColemanThingy(const char *text);

int main(void) {
    char* text = get_string(" ");
    printf("The coleman thingy is %10.6lf \n", calculateColemanThingy(text));
}

float calculateColemanThingy(const char *text) {
    int letters = 0, words = 0, sentences = 0;
    int i = 0;

    while (text[i] != '\0') {
        if (isalpha(text[i])) {
            letters++;
        } else if (text[i] == ' ') {
            words++;
        } else if (text[i] == '.' || text[i] == '!' || text[i] == '?') {
            sentences++;
        }
        i++;
    }

    //  Assuming that the index -1 points to the last character in the array
    if (i > 0 && text[i - 1] != ' ') {
        words++;
    }

    float L = (float) letters / words * 100;
    float S = (float) sentences / words * 100;

    float cIndex = 0.0588 * L - 0.296 * S - 15.8;
    return cIndex;
}

char* getGradeFromIndex(float index) {
    if      (index <=  1) { printf("Before Grade 1\n"); }
    else if (index >= 16) { printf("Grade 16+\n"); }
    else if (index >   1) {
        char *buffer = malloc(20 * sizeof(char));
        sprintf(buffer, "Grade %d", index);
        printf("%s\n", buffer);
    }
}

