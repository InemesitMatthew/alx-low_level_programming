char *_memcpy(char *dest, char *src, unsigned int n) {
    char *d = dest;
    const char *s = src;
    while (n--) {
        *d = *s;
        d++;
        s++;
    }
    return dest;
}
