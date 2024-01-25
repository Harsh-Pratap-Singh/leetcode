int longestCommonSubsequence(char* text1, char* text2) {
    int n = strlen(text1);
    int m = strlen(text2);
    int t[n+1][m+1];
    for(int i = 0;i <= n; i++){
        for(int j = 0; j <= m; j++){
            if( i == 0 || j == 0){
                t[i][j] = 0;
                continue;
            }
            if(text1[i-1] == text2[j-1]){
                t[i][j] = 1 + t[i-1][j-1];
            }
            else{
                t[i][j] = fmax(t[i-1][j] ,t[i][j-1]);
            }
        }
    }
    return t[n][m];
}