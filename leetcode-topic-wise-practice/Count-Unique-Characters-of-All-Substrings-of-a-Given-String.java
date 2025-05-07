class Solution {
    public int uniqueLetterString(String s) {
        //For s[i], the contribution it makes to the answer is (l) * (r)
        //l,r : the distance from the index i to the first left/right element that is equal to s[i]
        //Because a character only contributes to the answer if it is the unique character in the array
        //So the problem becomes to calculate l and r for each s[i]
        //We can iterate the array, and use an array to store the last index for 26 characters
        int n = s.length();
        int[] lastIndex = new int[26];
        Arrays.fill(lastIndex, -1);
        int[] f = new int[n];
        for (int i = 0; i < n; i++) {
            int c = (s.charAt(i) - 'A') ;
            f[i] = i - lastIndex[c];
            lastIndex[c] = i;
        }
        Arrays.fill(lastIndex, n);
        int res = 0;
        for (int i = n - 1; i >= 0; i--) {
            int c = (s.charAt(i) - 'A') ;
            f[i] = (lastIndex[c] - i) * f[i];
            res += f[i];
            lastIndex[c] = i;
        }
        return res;
    }
}