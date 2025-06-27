class Solution {
public:
    // Two pointer technique
    bool isPalindrome(string s){
    if (s.length() > 2e5) return false;
    for(int left = 0, right = s.length() - 1; left<right; left++,right--){
        // Making sure left points to an alphanumeric character
        while (left < right && !isalnum(s[left])) left++;
        // Making sure right points to an alphanumeric character
        while(left< right && !isalnum(s[right])) right--;
        // Checking if they are equal(but they should be lowercase)
        if(tolower(s[left]) != tolower(s[right])) return false;
    }
    return true;
}

};