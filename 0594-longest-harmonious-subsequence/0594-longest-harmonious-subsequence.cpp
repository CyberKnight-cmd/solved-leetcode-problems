class Solution {
public:
        int findLHS(vector<int>& nums) {
            unordered_map<int, int> mpp;
            for (auto &&i : nums)
                mpp[i]++;
            
            int maxSequence = 0;
            for (auto &&i : mpp)
                if(mpp.count(i.first+1))
                    maxSequence = max(mpp[i.first] + mpp[i.first+1], maxSequence);
            return maxSequence;  
        }
};