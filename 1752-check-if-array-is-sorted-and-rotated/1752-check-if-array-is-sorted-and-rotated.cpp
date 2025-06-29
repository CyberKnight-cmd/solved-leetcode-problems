class Solution {
public:
bool check(vector<int>& arr) {
    int n = arr.size();
    if (arr[0]<arr[n-1]){ // Checking already sorted arrays
        for(int i = 0; i < n-1; i++){
            if(arr[i]>arr[i+1])
                return false;
        }
        return true;
    }
    bool endPoint = false;
    for(int i = 0;i<n;i++){
        if((i != n-1) && (arr[i]>arr[i+1])){
            if (endPoint == false)  endPoint = true;
            else return false;
        }
    }
    return true;
}
};