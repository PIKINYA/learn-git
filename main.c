#include <stdio.h>

int main(void) {
    char c;

    printf("Введите символ: ");
    scanf("%c", &c);
    if (c == 5) {
    	printf("hehe EEEEEEEEE");
    }

    printf("Код символа: %d\n", (unsigned char)c);

    return 0;
}
