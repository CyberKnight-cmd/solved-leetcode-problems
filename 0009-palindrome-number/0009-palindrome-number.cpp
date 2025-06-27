class Solution {
public:
    bool isPalindrome(int x){
    if (x<0) return false;
    int numCopy = x, rev = 0;
    while (numCopy!=0)
    {   
        int digit = numCopy%10;
        if (rev > INT_MAX / 10 || (rev == INT_MAX / 10 && digit > 7)) return 0;
        if (rev < INT_MIN / 10 || (rev == INT_MIN / 10 && digit < -8)) return 0;
        rev = rev*10 + digit;
        numCopy/=10;
    }
    return x==rev;
}
};