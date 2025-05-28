#include <stdio.h>
#include <ctype.h> // Для tolower()

int main() {
    char letter = 'E';
    char lower = tolower(letter); // Переводим в нижний регистр
    int is_vowel = 0;

    switch (lower) {
        case 'a': case 'e': case 'i': case 'o': case 'u':
            is_vowel = 1;
            break;
        default:
            is_vowel = 0;
    }

    printf("Буква '%c' %sявляется гласной\n", 
           letter, is_vowel ? "" : "не ");

    return 0;
}
