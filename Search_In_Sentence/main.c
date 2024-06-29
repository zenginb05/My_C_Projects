#include <stdlib.h>
#include <stdio.h>
#include <string.h>

int main() {

    char searched_word[20];
    char text[200];
    printf("Hello Please Enter Your Sentence [Max 200 Char] ... \n");
    fgets(text, sizeof(text), stdin);

    text[strcspn(text, "\n")] = 0;

    printf("Please enter the word you want to search: ");
    fgets(searched_word, sizeof(searched_word), stdin);

    searched_word[strcspn(searched_word, "\n")] = 0;

    int text_length = strlen(text);
    int word_length = strlen(searched_word);
    int found = 0;

    for (int i = 0; i <= text_length - word_length; i++) {
        if (strncmp(&text[i], searched_word, word_length) == 0) {
            printf("Word found starting from index %d\n", i);
            found = 1;
        }
    }

    if (!found) {
        printf("Word not found in the text.\n");
    }

    return 0;
}
