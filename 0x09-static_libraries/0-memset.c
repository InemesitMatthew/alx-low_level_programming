char *_memset(char *s, char b, unsigned int n) {
    char *ptr = s;
    while (n--) {
        *ptr = b;
        ptr++;
    }
    return s;
}
