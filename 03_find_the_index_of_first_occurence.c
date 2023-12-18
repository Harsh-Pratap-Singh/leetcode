#include <string.h>

int strStr(char* haystack, char* needle) {
    int haystackSize = strlen(haystack);
    int needleSize = strlen(needle);

    for (int i = 0; i < haystackSize - needleSize + 1; i++) {
        if (haystack[i] == needle[0]) {
            int currentPos = i;
            int mismatch = 0;

            for (int j = 0; j < needleSize; j++) {
                if (haystack[currentPos + j] != needle[j]) {
                    mismatch = 1;
                    break;
                }
            }

            if (mismatch == 0) {
                return currentPos;
            }
        }
    }

    return -1;
}
