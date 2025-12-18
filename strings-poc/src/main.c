#include <stdio.h>
#include <string.h>  

int main() {
    // --- strlen() example ---
    char greeting[] = "Hello, World!";
    size_t length = strlen(greeting);
    printf("1) strlen() -> The string \"%s\" has %zu characters.\n\n", greeting, length);

    // --- strcpy() example ---
    char source[] = "C Programming";
    char destination[50];
    strcpy(destination, source);
    printf("2) strcpy() -> Copied string: %s\n\n", destination);

    // --- strcmp() example ---
    char str1[] = "apple";
    char str2[] = "banana";
    int result = strcmp(str1, str2);
    printf("3) strcmp() -> Comparing \"%s\" and \"%s\": ", str1, str2);
    if (result < 0)
        printf("\"%s\" < \"%s\"\n\n", str1, str2);
    else if (result > 0)
        printf("\"%s\" > \"%s\"\n\n", str1, str2);
    else
        printf("\"%s\" == \"%s\"\n\n", str1, str2);

    // --- strcat() example ---
    char first[50] = "Hello";
    char second[] = " there!";
    strcat(first, second);  // append second to first
    printf("4) strcat() -> After concatenation: %s\n\n", first);

    // --- strstr() example ---
    char text[] = "C makes programming fun!";
    char *found = strstr(text, "programming");
    if (found != NULL)
        printf("5) strstr() -> Found 'programming' in: \"%s\"\n\n", text);
    else
        printf("5) strstr() -> Substring not found.\n\n");

    // --- Manual character iteration ---
    char word[] = "Iteration";
    printf("6) Manual iteration -> Characters in \"%s\": ", word);
    for (size_t i = 0; i < strlen(word); i++) {
        printf("[%c] ", word[i]);
    }
    printf("\n");

    return 0;
}
