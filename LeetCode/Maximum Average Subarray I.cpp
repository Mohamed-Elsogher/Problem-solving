class Solution { // using C++ to solve max average subarray 
public:
    double findMaxAverage(vector<int>& nums, int k) {
        double sum = 0 ; double current_sum = 0;
        if(k==1){
        return *max_element(nums.begin(), nums.end());          
        }
        else{ // using sliding window
        for(int i =0 ; i < k ; i++){
            sum += nums[i];
        }
        current_sum = sum ;

        for(int i = k ; i < nums.size() ; i++){
            sum += nums[i] - nums[i-k];

            current_sum = max(current_sum, sum);
        }
    
     return current_sum/k;
        }
    }
};
