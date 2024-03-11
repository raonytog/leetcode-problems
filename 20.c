bool isValid(char* s) {
    int cont_1 = 0, cont_2 = 0, cont_3 = 0;
    for (int i = 0; i < strlen(s); i++) {
        if (s[i] == '(' || s[i] == ')') cont_1++;
        if (s[i] == '[' || s[i] == ']') cont_2++;
        if (s[i] == '{' || s[i] == '}') cont_3++;
    }

    return( cont_1 % 2 == 0) && (cont_2 % 2 == 0) && (cont_3 % 2 == 0);
}