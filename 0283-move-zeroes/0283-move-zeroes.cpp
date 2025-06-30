class Solution {
public:
    void moveZeroes(vector<int> &nums){
        // Searching for first 0
        int j = 0, n = nums.size();
        for(int i=0;i<n;i++){
            if(nums[i] != 0) swap(nums[i], nums[j++]);
        }
    }
};