class Solution {
public:
    bool isPalindrome(int x) {
        long long org =x;
        long long rev =0;
        while(x>0){
            long long n = x%10;
            rev = rev*10 +n;
            x =x/10;
        }
        if(rev == org){
            return true;
        }
        else{
            return false;
        }
        
    }
};