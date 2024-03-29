int mx_strncmp(const char *s1, const char *s2, int n) {
    while (n && *s1 != '\0' && (*s1 == *s2)) {
        ++s1;
        ++s2;
        --n;
    }
    if (n == 0) {
        return 0;
    }
    else {
        return (*(unsigned char *)s1 - *(unsigned char *)s2);
    }
}
