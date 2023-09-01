unsigned int _strspn(char *s, char *accept) {
    unsigned int count = 0;
    int found;

    while (*s) {
        found = 0;
        for (int i = 0; accept[i]; i++) {
            if (*s == accept[i]) {
                found = 1;
                break;
            }
        }
        if (!found)
            break;
        count++;
        s++;
    }
    return count;
}
