#include <stdio.h>

int main(void) {
    //float values[3];
    float values[] = { 20.1, 23, 15.2 };
    printf("%.1f\n", values[1]);
    values[1] = 7.0;
    printf("%.1f\n", values[2]);
    double n = sizeof(values) / sizeof(values[0]);
    printf("%f\n", n);
}
