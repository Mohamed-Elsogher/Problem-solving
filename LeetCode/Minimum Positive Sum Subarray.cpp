class Solution {
    public int minimumSumSubarray(List<Integer> nums, int l, int r) {
        int n = nums.size();
        int res = Integer.MAX_VALUE;
       // loop for all possible l and r
        for(int i = l ; i <= r; i++) 
        {
           int sum =0 ;
           // loop for sum all first subarray size i 
            for(int j = 0 ; j < i ; j++)
            {
                sum += nums.get(j);
            }
            // store the min in res
            if(sum > 0 ){
                res = Math.min(res , sum);
            }
            // sliding window on others subarray in the array 
            for(int s = i ; s < n ; s++ ){
                sum += nums.get(s) - nums.get(s-i);
                // if it was + store it in res
                 if (sum > 0) {
                    res = Math.min(res, sum);
                }
            }
        }
        return res == Integer.MAX_VALUE ? -1 : res;
    }
}

