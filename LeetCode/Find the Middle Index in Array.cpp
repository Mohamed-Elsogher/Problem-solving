class Solution {
public:
    int findMiddleIndex(vector<int>& nums) {
            if(nums.size() == 0) return - 1;
        int leftsum =0 ; int rightsum = 0 ;
        for(int i : nums){
            rightsum += i ;
        }
        for(int i = 0 ; i < nums.size() ; i++){
            rightsum -= nums[i];
            if(rightsum == leftsum) return i ;
            leftsum += nums[i];
        }
        return -1 ;
    }
};
