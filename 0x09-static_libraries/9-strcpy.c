char *_strcpy(char *dest, char *src) {
    char *ptr = dest;
    while (*src) {
        *ptr = *src;
        ptr++;
        src++;
    }
    *ptr = '\0';
    return dest;
}
