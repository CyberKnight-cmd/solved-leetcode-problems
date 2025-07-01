class Solution {
public:
    int missingNumber(vector<int> &arr){
        int n = arr.size(), XOR = 0;
        for(int i = 0; i < n; i++){
            XOR ^= i^arr[i];
        }
        XOR ^= n;
        return XOR;
        }
};