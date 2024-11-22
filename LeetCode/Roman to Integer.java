class Solution {
    public int romanToInt(String s) {
        int value = 0;
        int pValue = 0;
        char[] str = s.toCharArray();

        for (int i = 0; i < str.length; i++) {
            int cValue = 0;
            switch (str[i]) {
                case 'I':
                    cValue = 1;
                    break;
                case 'V':
                    cValue = 5;
                    break;
                case 'X':
                    cValue = 10;
                    break;
                case 'L':
                    cValue = 50;
                    break;
                case 'C':
                    cValue = 100;
                    break;
                case 'D':
                    cValue = 500;
                    break;
                case 'M':
                    cValue = 1000;
                    break;
            }
            if (cValue > pValue) {
                value += cValue - 2 * pValue;
            } else {
                value += cValue;
            }

            pValue = cValue;
        }

        return value;
    }
}
