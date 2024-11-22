class Solution {
    public boolean isPalindrome(int x) {
        if (x < 0) {
            return false; 
        }
        int original = x; 
        int result = 0; 
        while (x != 0) {
            int digit = x % 10; 
            x = x / 10; 
            result = result * 10 + digit;
        }
        return result == original; 
    }
}
