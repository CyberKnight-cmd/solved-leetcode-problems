class Solution {
public:
    vector<int> shuffle(vector<int> &nums, int n){
        int left = 0, right = n;
        vector<int> shuffledArray(2*n);
        for(int i = 0; i < 2*n; i++){
            if(!(i%2))  shuffledArray[i] = nums[left++];
            else        shuffledArray[i] = nums[right++];
        }
        return shuffledArray;
}

};