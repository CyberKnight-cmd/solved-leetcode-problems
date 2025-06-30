class Solution {
public:
void rotate(vector<int> &arr, int k){
    int n = arr.size();
    k %= n;
    reverse(arr.data()+(n-k), arr.data() + n);
    reverse(arr.data(), arr.data()+(n-k));
    reverse(arr.data(), arr.data()+n);
    for(int i = 0; i<n;i++){
        cout << arr[i] << " ";
    }
}
};