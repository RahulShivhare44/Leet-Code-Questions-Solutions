class Solution {
public:
    bool isPalindrome(int x) {
        if(x < 0){
            return false;
        } 
        long long rev = 0;
        long long temp = x; 
        while(temp){
            rev = rev*10 + temp%10;
            temp /= 10;
        }
    
        return x == rev ? true : false;
    }
};