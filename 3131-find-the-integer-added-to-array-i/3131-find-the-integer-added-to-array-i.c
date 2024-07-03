int min(int arr[], int size) {
    int min_val = arr[0];
    for (int i = 1; i < size; i++) {
        if (arr[i] < min_val) {
            min_val = arr[i];
        }
    }
    return min_val;
}

int addedInteger(int* nums1, int nums1Size, int* nums2, int nums2Size) {
    int r=0;
    r = min(nums2,nums2Size)-min(nums1,nums1Size);
    return r;
}