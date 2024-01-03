int numberOfBeams(char** bank, int bankSize) {
    int* count = (int*)malloc(bankSize * sizeof(int));
    int result = 0, prevCount = 0;  

    for (int i = 0; i < bankSize; i++) {  
        count[i] = 0;

        for (int j = 0; j < strlen(bank[i]); j++) {
            if (bank[i][j] == '1') {
                count[i]++;
            }
        }

        if (count[i] > 0) {
            result += count[i] * prevCount;  
            prevCount = count[i];          
        }
    }

    free(count);

    return result;
}
