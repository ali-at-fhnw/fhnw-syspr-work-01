#include <string.h>
#include <stdio.h>

int main (void) {
    char *a = "Hallo";
    char b[10];
    printf("%s %s\n", a, b);
    strcpy(b, a);
    printf("Resultat: %s\n", b);
    strcat(b, "abc");
    printf("Cat-Res: %s\n", b);
    return 0;
}
