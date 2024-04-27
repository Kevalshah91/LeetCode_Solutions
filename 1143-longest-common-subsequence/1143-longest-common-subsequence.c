int longestCommonSubsequence(char* text1, char* text2) {
    int i,j;
    int len_x = strlen(text1);
    int len_y = strlen(text2);
    int** LCS = (int**)malloc((len_x + 1) * sizeof(int*));
    for (int i = 0; i <= len_x; i++) {
        LCS[i] = (int*)malloc((len_y + 1) * sizeof(int));
    }
    for (i = 0; i <= len_x; i++) {
        LCS[i][0] = 0;
    }
    for (j = 0; j <= len_y; j++) {
        LCS[0][j] = 0;
    }
    for (i = 1; i <= len_x; i++) {
        for (j = 1; j <= len_y; j++) {
            if (text1[i - 1] == text2[j - 1]) {
                LCS[i][j] = LCS[i - 1][j - 1] + 1;
            }
            else{
                if (LCS[i - 1][j] > LCS[i][j - 1]) {
                    LCS[i][j] = LCS[i - 1][j];
                } 
                else {
                    LCS[i][j] = LCS[i][j - 1];
                }
            }
        }
    }
    int result = LCS[len_x][len_y];
    for (int i = 0; i <= len_x; i++) {
        free(LCS[i]);
    }
    free(LCS);

    return result;
}