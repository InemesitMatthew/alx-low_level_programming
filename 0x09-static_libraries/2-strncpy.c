char *_strncpy(char *dest, char *src, int n) {
    char *ptr = dest;
    while (*src && n > 0) {
        *ptr = *src;
        ptr++;
        src++;
        n--;
    }
    while (n > 0) {
        *ptr = '\0';
        ptr++;
        n--;
    }
    return dest;
}
