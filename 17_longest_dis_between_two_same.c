int maxLengthBetweenEqualCharacters(char* s) {
    if(strlen(s) <= 1) {
        return 0;
    }

    int maxD = -1;

    for(int i = 0; i < strlen(s); i++) {
        for(int j = i + 1; j < strlen(s); j++) {
            if(s[i] == s[j]) {
                int d = j - i - 1;
                if(d > maxD) {
                    maxD = d;
                }
            }
        }
    }

    return maxD;
}