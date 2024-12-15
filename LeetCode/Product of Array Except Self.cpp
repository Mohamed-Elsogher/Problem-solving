class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int size = nums.size();
        vector<int> ans (size, 1);
        int pro = 1 ;
        // prefix product
        for(int i =0 ; i < size ; i++){
            ans[i] = pro;
            pro *= nums[i];
        }
        pro = 1; 
        //suffix product :)
        for(int i = size- 1 ; i >= 0 ; i--){
            ans[i] *= pro;
            pro *= nums[i];
        }
        return ans;
    }
};
