class Solution {
public:
    vector<int> buildArray(vector<int>& nums){
        int n = nums.size();
    
    // First pass: encode both original and new values
        for(int i = 0; i < n; i++){
            nums[i] = nums[i] + (nums[nums[i]] % n) * n;
        }

        // Second pass: extract only new values
        for(int i = 0; i < n; i++){
            nums[i] = nums[i] / n;
        }

        return nums;    
}
};