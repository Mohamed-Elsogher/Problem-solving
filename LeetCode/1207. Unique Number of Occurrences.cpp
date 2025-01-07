class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr) {
        unordered_map<int,int> freqmp;
        for(int i : arr){
            freqmp[i]++;
        }
        unordered_set<int> freqs;
        for(auto& i : freqmp){
            freqs.insert(i.second);
        }
        return freqs.size() == freqmp.size();
    }
};
