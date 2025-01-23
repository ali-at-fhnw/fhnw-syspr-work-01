#include <stdio.h>
#include <string.h>

int main(int argc, char *argv[]) {
    // check each arg, except program name
    for(int i = 1; i < argc; i++) {
        for(char *p =  argv[i]; *p != '\0'; p++) {
            if(*p < 'a' || *p > 'z') {
                printf("error: the programm accepts arguments only containing [a-z] as char\n");
                return -1;
            }
        }
    }
    // print all arguments
    for(int i = 0; i < argc; i++) {
        printf("#%d: %s\n", i, argv[i]);
    }
    return 0;
}
