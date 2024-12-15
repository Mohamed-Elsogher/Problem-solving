class Solution {
public:
    int countKConstraintSubstrings(string s, int k) {
      int size = s.size();
      int left = 0 ; 
      int countone = 0 ; int countzero = 0;
      int ans= 0;
      for(int right = 0 ; right < size ; right++){
        if(s[right]=='0') {countzero++;}
        else {countone++;}

        while(countzero > k && countone > k){
            if(s[left] == '0') {countzero --;}
            else {countone--;}
            left ++ ;
        }
        ans += right - left +1 ;
      }

return ans;
    }
};
