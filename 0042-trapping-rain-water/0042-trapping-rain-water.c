int max(int a, int b) {
    return (a > b) ? a : b;
}

int min(int a, int b) {
    return (a < b) ? a : b;
}
int trap(int* height, int heightSize) {
    int l = 0, r = 0;
    int* max_left = (int*)malloc(heightSize * sizeof(int));
    int* max_right = (int*)malloc(heightSize * sizeof(int));
    int* result = (int*)malloc(heightSize * sizeof(int));
    for (int i = 0; i < heightSize; i++) {
        int j = -i - 1 + heightSize; 
        max_left[i] = l;
        max_right[j] = r;
        l = max(l, height[i]);
        r = max(r, height[j]);
    }
    
    for (int i = 0; i < heightSize; i++) {
        int capacity = min(max_left[i], max_right[i]);
        result[i] = max(0, capacity - height[i]);
    }
    
    int total = 0;
    for (int i = 0; i < heightSize; i++) {
        total += result[i];
    }
    return total;
}