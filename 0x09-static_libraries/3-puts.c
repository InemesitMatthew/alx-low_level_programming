#include <unistd.h>

void _puts(char *s) {
    while (*s) {
        write(1, s, 1);
        s++;
    }
}
