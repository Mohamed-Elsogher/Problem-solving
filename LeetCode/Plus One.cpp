class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        
        int lastIndex = digits.size() - 1;

        digits[lastIndex] += 1;

        for (int i = lastIndex; i >= 0; i--) {
            if (digits[i] == 10) {
                digits[i] = 0;
                if (i == 0) {
                    digits.insert(digits.begin(), 1);  
                } else {
                    digits[i - 1] += 1;
                }
            } else {
                break;
            }
        }

        return digits;
    }
};
