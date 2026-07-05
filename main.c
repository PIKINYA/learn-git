#include <stdio.h>

int main(void) {
    char c;

    printf("Введите символ: ");
    scanf("%c", &c);
    if (c == 5) {
    	printf("hehe EEEEEEEEE");
    }
    if (c == 0) {
        	printf("oh no zerooooo");
    }

    printf("symbol code: %d\n", (unsigned char)c);

    return 0;
}
