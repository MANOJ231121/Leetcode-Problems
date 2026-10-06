class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        unordered_map<int,int>mpp;
        for(int i = 0;i<nums.size();i++){
            mpp[nums[i]]++;
        }
        for(auto count :mpp){
            if(count.second>1){
                return count.first;
            }
        }
      return 0 ; 
    }
};