#include <ctype.h>
#include <string.h>

int lengthOfLastWord(const char* s) {
    int n = strlen(s);
    int length = 0;

    for (int i = n - 1; i >= 0; i--) {
        if (isspace(s[i])) {
            if (length > 0) {
                break;
            }
        } else {
            length++;
        }
    }

    return length;
}
