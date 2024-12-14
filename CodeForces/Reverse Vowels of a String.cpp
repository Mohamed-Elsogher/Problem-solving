class Solution {
public:
    string reverseVowels(string s) {
      
        int left = 0 ; int right = s.size()-1;
        while(left < right)
        {
            bool isLeftVowel = isVowel(s[left]);
            bool isRightVowel = isVowel(s[right]);
            if (isLeftVowel && isRightVowel) {
                swap(s[left], s[right]); 
                left++;
                right--;
            } else if (!isLeftVowel) { 
                left++; 
            } else { 
                right--; 
            }
        }
        return s;
    }
     bool isVowel(char c) {
        return c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u' ||
               c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U';
    }
};
