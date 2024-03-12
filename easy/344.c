void reverseString(char* s, int sSize) {
    int start = 0, end = 0;
    char aux = '.';
    for (int i = 0, j = sSize-1; i != (sSize/2); i++, j--) {
        aux = s[i];
        s[i] = s[j];
        s[j] = aux;
    }
}