/**
 * Return an array of arrays of size *returnSize.
 * The sizes of the arrays are returned as *returnColumnSizes array.
 * Note: Both returned array and *columnSizes array must be malloced, assume caller calls free().
 */
int** transpose(int** matrix, int matrixSize, int* matrixColSize, int* returnSize, int** returnColumnSizes) {
    int i,j;
    int** transposed = (int**)malloc(*matrixColSize * sizeof(int*));
    *returnColumnSizes = (int*)malloc(*matrixColSize * sizeof(int));
    for(i = 0; i < *matrixColSize; i++) {
        transposed[i] = (int*)malloc(matrixSize * sizeof(int));
        (*returnColumnSizes)[i] = matrixSize;
        for(j = 0; j < matrixSize; j++) {
            transposed[i][j] = matrix[j][i]; // Corrected line
        }
    }
    *returnSize = *matrixColSize;
    
    return transposed;
   
}