class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int left =0;
        int right = 0;
        int maxcount =0;
        while(right<nums.size()){
            if(nums[right]==0){
                maxcount =max(maxcount,right-left);
                left = right+1;
            }
            right++;
        }
            maxcount = max(maxcount,right-left);
        return maxcount;
    }
};