#include <stdio.h>
#include <string.h>

int main() {
    char word[] = "yellow";
    char result[4]; // "low" + '\0'
    int start = 3;   // Начинаем с 3-го символа ('l')
    int end = 6;     // Заканчиваем перед 6-м символом (после 'w')

    int j = 0;
    for (int i = start; i < end; i++) {
        result[j] = word[i]; // Копируем символы
        j++;
    }
    result[j] = '\0'; // Добавляем конец строки

    printf("Результат: %s\n", result);

    return 0;
}
