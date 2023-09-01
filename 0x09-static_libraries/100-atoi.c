int _atoi(char *s) {
    int result = 0;
    int sign = 1;

    while (*s) {
        if (*s == '-')
            sign = -sign;
        else if (*s >= '0' && *s <= '9')
            result = result * 10 + (*s - '0');
        else
            break;
        s++;
    }
    return result * sign;
}
