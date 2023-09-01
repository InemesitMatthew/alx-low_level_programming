char *_strncat(char *dest, char *src, int n) {
    char *ptr = dest;
    while (*ptr)
        ptr++;
    while (*src && n > 0) {
        *ptr = *src;
        ptr++;
        src++;
        n--;
    }
    *ptr = '\0';
    return dest;
}
