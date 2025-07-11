class Solution {
public:
    // Time Complexity : O(2^n)
    // Space Complexity : O(1)
    int fib(int n){
        if (n<=1)    return n;
        else if(n==1)    return 1;
        else return (fib(n-1) + fib(n-2));
    }

    
};