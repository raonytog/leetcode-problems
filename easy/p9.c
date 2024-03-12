#include <stdlib.h>
#include <stdio.h>
#include <stdbool.h>

bool isPalindrome(int x) {
    unsigned int reversed = 0, remain = 0, original = x;
    while (x > 0) {
        remain = x % 10;
        reversed = reversed * 10 + remain;
        x /= 10;
    }

    if (original == reversed) return true;
    else return false;
}
