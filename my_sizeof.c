#include <stdio.h>

int main(void) {
    printf("sizeof(char)      = %lu Byte\n", sizeof(char));
    printf("sizeof(int)       = %lu Byte\n", sizeof(int));
    printf("sizeof(int)       = %lu Byte\n", sizeof(unsigned int));
    printf("sizeof(short)     = %lu Byte\n", sizeof(short));
    printf("sizeof(long)      = %lu Byte\n", sizeof(long));
    printf("sizeof(long)      = %lu Byte\n", sizeof(unsigned long));
    printf("sizeof(long long) = %lu Byte\n", sizeof(long long));
    printf("sizeof(float)     = %lu Byte\n", sizeof(float));
    printf("sizeof(double)    = %lu Byte\n", sizeof(double));
    printf("sizeof(longdouble)= %lu Byte\n", sizeof(long double));
    return 0;
}
