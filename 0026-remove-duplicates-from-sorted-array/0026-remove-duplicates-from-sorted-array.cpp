class Solution {
public:
        int removeDuplicates(vector<int> &nums){
            int low = 0, high = 1, n = nums.size();
            while(high<n){
                if(nums[low]!=nums[high]){
                    nums[low + 1] = nums[high];
                    low++;
                }
                high++;
            }
            return low+1;
        }
};