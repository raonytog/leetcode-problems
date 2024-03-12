char* toLowerCase(char* s) {
    int dif = 'A' - 'a';
    for (int i = 0; s[i] != '\0'; i++) {
        if (s[i] >= 'A' && s[i] <= 'Z') s[i] -= dif;
    }
    return s;
}