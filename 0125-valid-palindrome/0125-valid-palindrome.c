bool isPalindrome(char* s) {
    int len = strlen(s);
    int i=0;
    int j=len-1;
    while(i<j){
        while(i<j && !isalnum(s[i])){
            i++;
        }
        while(i<j && !isalnum(s[j])){
            j--;
        }
        char l = tolower(s[i]);
        char r = tolower(s[j]);
        if(l != r){
            return false;
        }
        i++;
        j--;
    }
    return true;
}