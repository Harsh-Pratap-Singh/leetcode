/**
 * Return an array of arrays of size *returnSize.
 * The sizes of the arrays are returned as *returnColumnSizes array.
 * Note: Both returned array and *columnSizes array must be malloced, assume caller calls free().
 */
int** findWinners(int** matches, int matchesSize, int* matchesColSize, int* returnSize, int** returnColumnSizes) {
    
    int losses[100001];
    memset(losses, -1, sizeof(losses));

    for (int i = 0; i < matchesSize; ++i) {
        if (losses[matches[i][0]] == -1) {
            losses[matches[i][0]] = 0;
        }
        if (losses[matches[i][1]] == -1) {
            losses[matches[i][1]] = 0;
        }
        losses[matches[i][1]]++;
    }


    int zeros = 0;
    int ones = 0;
    for (int i = 0; i < 100001; ++i)  {
        if( losses[i]==0) zeros++;
        if(losses[i]==1) ones ++;
    }


    int **result = (int **)calloc(2, sizeof(int *));
    if (result == NULL) {
        return NULL;
    }
    result[0] = (int *)malloc(zeros * sizeof(int));
    if (result[0] == NULL) {
        free(result);
        return NULL;
    }
    result[1] = (int *)malloc(ones * sizeof(int));
    if (result[1] == NULL) {
        free(result[0]);
        free(result);
        return NULL;
    }


    *returnSize = 2;
    *returnColumnSizes = (int *)calloc(2, sizeof(int));
    if (*returnColumnSizes == NULL) {
        free(result);
        return NULL;
    }
    (*returnColumnSizes)[0] = zeros;
    (*returnColumnSizes)[1] = ones;


    int zero_id = 0;
    int one_id = 0;
    for (int i = 0; i < 100001; ++i) {
        if (losses[i] == 0) {
            result[0][zero_id++] = i;
        }
        else if (losses[i] == 1) {
            result[1][one_id++] = i;
        }
    }
    
    return result;
}