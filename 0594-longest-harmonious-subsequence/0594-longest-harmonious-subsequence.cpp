class Solution {
public:
        int findLHS(vector<int>& nums) {
            unordered_map<int, int> mpp;
            for (auto &&i : nums)
                mpp[i]++;
            
            int maxSequence = 0;
            for (auto& [key, val] : mpp)
                if(mpp.count(key+1))
                    maxSequence = max(val + mpp[key+1], maxSequence);
            return maxSequence;
        }
};