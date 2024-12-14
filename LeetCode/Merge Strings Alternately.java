class Solution {
    public String mergeAlternately(String word1, String word2) {

        char[] ch1 = word1.toCharArray();
        char[] ch2 = word2.toCharArray();
        StringBuilder result = new StringBuilder();
        
        int max = Math.max(ch1.length, ch2.length);

        for (int i = 0; i < max; i++) {
            if (i < ch1.length) {
                result.append(ch1[i]);
            }
            if (i < ch2.length) {
                result.append(ch2[i]);
            }
        }
        return result.toString();
    }
}
