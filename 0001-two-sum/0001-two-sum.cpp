class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int n = nums.size();

        // Pair each element with its original index
        vector<pair<int, int>> arr;
        for(int i = 0; i < n; i++){
            arr.push_back({nums[i], i});
        }

        // Sort the array based on values
        sort(arr.begin(), arr.end());

        int left = 0, right = n - 1;
        while(left < right){
            int sum = arr[left].first + arr[right].first;
            if(sum == target){
                // Return original indices
                return {arr[left].second, arr[right].second};
            }
            else if(sum < target){
                left++;
            }
            else{
                right--;
            }
        }

        // If no solution found (problem guarantees one exists)
        return {};
    }
};