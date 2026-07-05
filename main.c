#include <stdio.h>

int main(void) {
    char c;

    printf("Введите символ: ");
    scanf("%c", &c);

    printf("Код символа: %d\n", (unsigned char)c);

    return 0;
}
