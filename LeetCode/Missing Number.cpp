class Solution {
public: // Binary search
    int missingNumber(vector<int>& nums){

        int left = 0 ;int right = nums.size(); 
        sort(nums.begin() , nums.end());
        while(left < right ){
            int mid = left + (right - left )/2;
            if(nums[mid] > mid) right = mid ;
            else left = mid +1;
        }
        return left ;
    }
};
// fast and easy solution beat 100% in leetcode :
class Solution {
public:
    int missingNumber(vector<int>& nums){
        int n = nums.size();
        int sum = n*(n+1) /2; 
        int sum2  =0 ;
        for(int i = 0 ; i < n ; i++){
            sum2 += nums[i];
        }
        return sum - sum2;
    }
};
