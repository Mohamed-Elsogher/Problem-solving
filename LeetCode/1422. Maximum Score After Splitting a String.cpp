class Solution {
public:
    int maxScore(string s) 
    {
       int ones = count(s.begin() , s.end() , '1');
       int res = 0 ;
       int zero = 0 ;
       for(int i =0 ; i < s.size()-1; i++){
        if(s[i]=='1'){
            ones--;
        }
        else {
            zero++;
        }
        res = max(res , zero + ones);
       }
        return res;



    }
};
