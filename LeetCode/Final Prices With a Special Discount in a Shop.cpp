// Brute Force Code
class Solution {
public:
    vector<int> finalPrices(vector<int>& prices) {

        for(int i = 0 ; i < prices.size() ; i++){
            for(int j = i +1 ; j < prices.size() ; j++){
                if (prices[j] <= prices[i]) {
                    prices[i] -= prices[j];
                    break;
                }
            }
         }
        
        return prices;
    }
};
// Monotonic Stack code
class Solution {
public:
    vector<int> finalPrices(vector<int>& prices) {
        int n = prices.size();
        vector<int> result(prices); 
        stack<int> st; 
        
        for (int i = 0; i < n; i++) {
        
            while (!st.empty() && prices[i] <= prices[st.top()]) {
                result[st.top()] -= prices[i]; 
                st.pop(); 
            }
            st.push(i); 
        }
        
        return result; 
    }
};
