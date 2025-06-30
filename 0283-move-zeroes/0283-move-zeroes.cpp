class Solution {
public:
    void moveZeroes(vector<int> &nums){
        // Searching for first 0
        int i = 0, n = nums.size();
        for(i = 0;i < n;i++)
            if(!nums[i])
                break;
        if(i==n)    return;
        // Starting off from the next 0
        for(int j = i + 1; j<n; j++){
            if(nums[j])
                swap(nums[i++], nums[j]);
        }
    }
};