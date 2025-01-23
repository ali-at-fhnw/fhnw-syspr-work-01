#include <stdio.h>

int main(void) {
    int result;
    int ch;
    do {
        printf("enter 'y' or 'n'\n");
        ch = getchar();
        switch (ch) {
            case 'y': result = 1; break;
            case 'n': result = 0; break;
            default:  result = -1;
        }
        printf("Char-Code: %d\nResult-Code: %d\n\n", ch, result);
    } while (result != 0 && result != 1);
}
