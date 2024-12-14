class Solution {
public:
    vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies) {

         int sum = 0;
         int current_sum = 0;
         vector<bool>result ;
         auto max_it = std::max_element(candies.begin() , candies.end());
         int max = *max_it;
        for(int i =0 ; i< candies.size() ; i++)
        {
            sum = extraCandies + candies[i];
           
            if(sum >= max){
                result.push_back(true);
            }
            else result.push_back(false);  
        }
    return result ;
    }
};
