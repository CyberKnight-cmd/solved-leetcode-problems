class Solution {
public:
    int maxFrequency(vector<int>& nums, int k) {
        int n = nums.size();
        sort(nums.begin(), nums.end());
        int left = 0, right = 0, windowLen = right - left + 1, maxFreq = 0;
        long total = 0;
        while(right<n){
            total+= nums[right];
            // Decreasing the window if invalid
            while( (long long)nums[right]*windowLen > total + k){

                total -= nums[left++];
                windowLen--;
            }
            maxFreq = max(windowLen, maxFreq);
            right++;
            windowLen++;
        }

        return maxFreq;
    }
};