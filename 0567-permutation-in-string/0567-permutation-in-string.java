class Solution {
    public boolean checkInclusion(String s1, String s2) {
        int n=s1.length();
        int m=s2.length();
        int i;
        if(n>m){
            return false;
        }
        int[] a = new int[26];
        int[] b = new int[26];
        for(i=0;i<n;i++){
            a[s1.charAt(i)-'a']++;
            b[s2.charAt(i)-'a']++;
        }
        for (i = 0; i <= m - n; i++) {
            if (Equal(a, b)) {  
                return true; 
            }
            if (i < m - n) {
                b[s2.charAt(i) - 'a']--; 
                b[s2.charAt(i + n) - 'a']++;
            }
        }
        return Equal(a, b);
    }
    private static boolean Equal(int[] a, int[] b) {
        for (int i = 0; i < 26; i++) {
            if (a[i] != b[i]) {
                return false;
            }
        }
        return true;
    }
    }