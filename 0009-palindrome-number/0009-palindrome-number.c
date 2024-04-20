bool isPalindrome(int x) {
    if (x < 0) {
        return false;
    }
    int original = x; 
    long rv = 0;
    while (x != 0) {
        int d = x % 10;
        rv = rv * 10 + d;
        x /= 10;
    }
    return rv == original;
}